cantata-jsbind
==============
Test

테스트는 nodeunit을 사용한다.

테스트를 위한 테스트케이스는 `test/src/*.js`로 작성되어 있다.

nodeunit을 설치하기 위해서는 다음의 명령을 사용한다.

```
sudo npm i nodeunit -g

cd test/src

nodeunit *.js
```

개발을 위해서는 CI를 추가 설치하는 것을 추천한다.

```
sudo npm i nodeunit-watcher -g

cd test/src

nodeunit-watcher *.js
```


* Reference
[V8 Document](https://developers.google.com/v8/?hl=ko)

[V8 API Reference](http://izs.me/v8-docs/main.html)

http://nodejs.org/api/addons.html

https://www.cloudkick.com/blog/2010/aug/23/writing-nodejs-native-extensions

http://syskall.com/how-to-write-your-own-native-nodejs-extension/index.html
