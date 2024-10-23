# react-native

> create app

```sh
sudo npx react-native init <project_name>
```

> change permission 

```sh
sudo chmod -R 777 </path/to/folder>
```

> clean build

```sh
./gradlew clean
```

> build apk

```sh
cd android
./gradlew clean
```

> Proguard reduces the size of the APK by removing unused code and resources.\
> In `android/app/build.gradle`, ensure the following is enabled:

```gradle
def enableProguardInReleaseBuilds = true
```

> Hermes is a lightweight JavaScript engine that can reduce the app size and improve performance.\
> Enable Hermes in `android/app/build.gradle`:

```gradle
project.ext.react = [
  enableHermes: true
]
```

> Split APKs by ABI (Android)
>
> Generate separate APKs for each CPU architecture (ARM, ARM64, x86) to reduce the download size.
> Update `android/app/build.gradle`:

```gradle
android {
  ...
  splits {
    abi {
      enable true
      reset()
      include "armeabi-v7a", "arm64-v8a", "x86"
      universalApk false
    }
  }
}
```
