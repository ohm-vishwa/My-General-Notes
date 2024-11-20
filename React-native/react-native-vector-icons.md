#  1. React native vector icons [`npm`](https://www.npmjs.com/package/react-native-vector-icons) [`icons`](https://oblador.github.io/react-native-vector-icons/)

1 install
```sh
npm i react-native-vector-icons
```

2 setup
Edit `android/app/build.gradle` (NOT android/build.gradle) and add:

```sh
apply from: file("../../node_modules/react-native-vector-icons/fonts.gradle")
```

3  add `android/app/build.gradle` 

dependencies {
```sh
implementation project(':react-native-vector-icons')
```
}