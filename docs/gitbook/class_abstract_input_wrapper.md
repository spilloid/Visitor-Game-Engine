---
search:
    keywords: ['AbstractInputWrapper', 'getKeyPresses', 'getLastClick']
---

# class AbstractInputWrapper

[**Class List**](annotated.md) **>** [**AbstractInputWrapper**](class_abstract_input_wrapper.md)




Inherited by the following classes: **[SFMLInputWrapper](class_s_f_m_l_input_wrapper.md)**

## Public Functions

|Type|Name|
|-----|-----|
|virtual std::vector< int >|[**getKeyPresses**](class_abstract_input_wrapper.md#1a4eaf73d4e5ff75eeec6083224c390eae) () = 0<br>Get keypresses as keycode since last check. |
|virtual **[click](structclick.md)**|[**getLastClick**](class_abstract_input_wrapper.md#1a7d57574afd1e141d95daea824f2e870f) () = 0<br>gets last click to occur, as an object |


## Public Functions Documentation

### function <a id="1a4eaf73d4e5ff75eeec6083224c390eae" href="#1a4eaf73d4e5ff75eeec6083224c390eae">getKeyPresses</a>

```cpp
virtual std::vector< int > AbstractInputWrapper::getKeyPresses () = 0
```

Get keypresses as keycode since last check. 



**Returns:**

std::shared\_ptr<int> : array of keypresses pushed since last check 




### function <a id="1a7d57574afd1e141d95daea824f2e870f" href="#1a7d57574afd1e141d95daea824f2e870f">getLastClick</a>

```cpp
virtual click AbstractInputWrapper::getLastClick () = 0
```

gets last click to occur, as an object 



**Returns:**

click 






----------------------------------------
The documentation for this class was generated from the following file: `classes/AbstractInputWrapper.h`
