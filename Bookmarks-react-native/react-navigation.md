# React Naigation [`docs`](https://reactnavigation.org/docs/getting-started)

1 install 

```bash
npm install @react-navigation/native
```

2 install dependencies
```bash
npm install react-native-screens react-native-safe-area-context
```

3 inside `App.js`
```js

import React from 'react';
import {NavigationContainer} from '@react-navigation/native';

const App = () => {
  return (
    <NavigationContainer>
        {/* Any type of navigator*/ }
    </NavigationContainer>
  );
};

export default App;

```

### bottom Tab Navigation [`docs`](https://reactnavigation.org/docs/bottom-tab-navigator)

1 install 

```bash
npm install @react-navigation/bottom-tabs
```

2 inside `App.js`

```js
import React from 'react';
import {NavigationContainer} from '@react-navigation/native';
import {createBottomTabNavigator} from '@react-navigation/bottom-tabs';
import HomeScreen from './src/Screen/HomeScreen';
import AntDesign from 'react-native-vector-icons/AntDesign';

const App = () => {
  const Tab = createBottomTabNavigator();
  return (
    <NavigationContainer>
      <Tab.Navigator screenOptions={{tabBarShowLabel: false, headerShown: false}}>
        <Tab.Screen
          name="home"
          component={HomeScreen}
          options={{
            tabBarIcon: ({color, focused, size}) => {
              return <AntDesign name="home" color={color} size={size} />;
            },
          }}
        />
      </Tab.Navigator>
    </NavigationContainer>
  );
};

export default App;
```