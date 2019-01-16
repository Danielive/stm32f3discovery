# STM32F3Discovery

## Description
### Software used
* IDE µVision 5
* STM32CubeMX

### 3.2 TFT LCD Display Module. Model: HY32D
#### Parameters 
<img src="https://camo.githubusercontent.com/97c0b4bf5fb469c3101ec9c5dcf0272ae087d3cd/68747470733a2f2f70702e757365726170692e636f6d2f633835323133322f763835323133323636372f39323364632f46694c51564e66597341412e6a7067"/>

#### LCD port scheme
<img src="https://camo.githubusercontent.com/60a947af874ddc8811be9818664caf3e48d4e172/68747470733a2f2f70702e757365726170692e636f6d2f633835323133322f763835323133323636372f39323365342f386e524f457a624e6378492e6a7067"/>

### Used functions
* HAL_Init() `HAL library initialization`
* SystemClock_Config() `Clocking system configuration`
* MX_GPIO_Init() `Initialization of input / output ports.`
* LCD_Configuration() `Configuration of the LCD port of the display in accordance with the LCD port scheme`
* LCD_Initializtion() `Initialize the LCD port of the display`
* LCD_Clear() `Сleaning the display in a given color`
* GUI_Text() `Display of text containing Latin and Russian characters`

### Work example
<img width="360" height="480" src="https://camo.githubusercontent.com/4af2ad9b07b56dc831f7325c736b3f12e71ce080/68747470733a2f2f70702e757365726170692e636f6d2f633835323133322f763835323133323434362f39323238612f54413948474d5a727672732e6a7067"/>
