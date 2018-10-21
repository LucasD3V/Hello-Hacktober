package main

import "fmt"

func prepareMessage(msgBits ...string) <-chan string {
	inChan := make(chan string)

	go func() {
		for _, msgBit := range msgBits {
			inChan <- msgBit
		}
		close(inChan)
	}()

	return inChan
}

func deliverMessage(outChan <-chan string) {
	for msgBit := range outChan {
		fmt.Printf("%s", msgBit)
	}
}

func main() {
	msgBits := []string{"Hello ", "world!"}
	inChan := prepareMessage(msgBits...)
	deliverMessage(inChan)
}
