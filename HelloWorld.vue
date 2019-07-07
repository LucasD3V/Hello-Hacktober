<html>
  <body>
    <div id="app">
      <p>{{ hello }}</p>
    </div>
    <script src="https://unpkg.com/vue"></script>
    <script>
        new Vue({
            el: '#app',
            data: { hello: 'Hello World!' }
        })
    </script>
  </body>
</html>
