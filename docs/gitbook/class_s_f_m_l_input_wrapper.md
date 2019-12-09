---
search:
    keywords: ['SFMLInputWrapper', 'SFMLInputWrapper', 'getKeyPresses', 'getLastClick']
---

# class SFMLInputWrapper

[**Class List**](annotated.md) **>** [**SFMLInputWrapper**](class_s_f_m_l_input_wrapper.md)




Inherits the following classes: **[AbstractInputWrapper](class_abstract_input_wrapper.md)**

## Public Functions

|Type|Name|
|-----|-----|
||[**SFMLInputWrapper**](class_s_f_m_l_input_wrapper.md#1abd471813dada36d96cd9d11fd285bbe5) (std::shared\_ptr< sf::RenderWindow > w) |
|virtual std::vector< int >|[**getKeyPresses**](class_s_f_m_l_input_wrapper.md#1a2641351dc60c62da230d195c27eae25f) () override <br>Get keypresses as keycode since last check. |
|virtual **[click](structclick.md)**|[**getLastClick**](class_s_f_m_l_input_wrapper.md#1aa836315c75ec30a561e769b2cb8b28bc) () override <br>gets last click to occur, as an object |


## Public Functions Documentation

### function <a id="1abd471813dada36d96cd9d11fd285bbe5" href="#1abd471813dada36d96cd9d11fd285bbe5">SFMLInputWrapper</a>

```cpp
explicit SFMLInputWrapper::SFMLInputWrapper (
    std::shared_ptr< sf::RenderWindow > w
)
```



### function <a id="1a2641351dc60c62da230d195c27eae25f" href="#1a2641351dc60c62da230d195c27eae25f">getKeyPresses</a>

```cpp
virtual std::vector< int > SFMLInputWrapper::getKeyPresses ()
```

Get keypresses as keycode since last check. 



**Returns:**

std::shared\_ptr<int> : array of keypresses pushed since last check 




Implements **[AbstractInputWrapper::getKeyPresses](class_abstract_input_wrapper.md#1a4eaf73d4e5ff75eeec6083224c390eae)**


### function <a id="1aa836315c75ec30a561e769b2cb8b28bc" href="#1aa836315c75ec30a561e769b2cb8b28bc">getLastClick</a>

```cpp
virtual click SFMLInputWrapper::getLastClick ()
```

gets last click to occur, as an object 



**Returns:**

click 




Implements **[AbstractInputWrapper::getLastClick](class_abstract_input_wrapper.md#1a7d57574afd1e141d95daea824f2e870f)**




----------------------------------------
The documentation for this class was generated from the following file: `classes/SFMLInputWrapper.h`
