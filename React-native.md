# react-native

## Initialization

> #### create app

```sh
sudo npx react-native init <project_name>
```

> #### change permission 

```sh
sudo chmod -R 777 </path/to/folder>
```

> #### setup `local.properties`
```
sdk.dir=/home/ohm/Android/Sdk
```

---
---

## Setup for apk build

> #### Generate `my-release-key.keystore`
```sh
keytool -genkeypair -v -keystore my-release-key.keystore -alias my-key-alias -keyalg RSA -keysize 2048 -validity 10000
```

> #### Set Up Gradle Variables
> Move the generated my-release-key.keystore file to the `android/app` directory of your React Native project.\
> Edit the file `android/gradle.properties`

```gradle
MYAPP_RELEASE_STORE_FILE=my-release-key.keystore
MYAPP_RELEASE_KEY_ALIAS=my-key-alias
MYAPP_RELEASE_STORE_PASSWORD=<password>
MYAPP_RELEASE_KEY_PASSWORD=<password>
```
> #### Configure build.gradle for Signing
> Open `android/app/build.gradle` and add the following signing configuration inside the android block:

```gradle
android {
    ...
    signingConfigs {
        release {
            if (project.hasProperty('MYAPP_RELEASE_STORE_FILE')) {
                storeFile file(MYAPP_RELEASE_STORE_FILE)
                storePassword MYAPP_RELEASE_STORE_PASSWORD
                keyAlias MYAPP_RELEASE_KEY_ALIAS
                keyPassword MYAPP_RELEASE_KEY_PASSWORD
            }
        }
    }
    buildTypes {
        release {
            signingConfig signingConfigs.release
            minifyEnabled false
            proguardFiles getDefaultProguardFile('proguard-android.txt'), 'proguard-rules.pro'
        }
    }
}
```

---
---

## Optimization setup

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

---
---

## Build Apk

> build apk

```sh
./gradlew assembleRelease
```

> clean build

```sh
cd android
./gradlew clean
```

---
---
