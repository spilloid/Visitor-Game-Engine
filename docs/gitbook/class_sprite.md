---
search:
    keywords: ['Sprite', 'x', 'dx', 'y', 'dy', 'height', 'width', 'textureLoc', 'Sprite', 'Sprite', 'getX', 'getY', 'setXY', 'getDX', 'getDY', 'setDXY', 'getHeight', 'getWidth', 'getTextureLocation']
---

# class Sprite

[**Class List**](annotated.md) **>** [**Sprite**](class_sprite.md)


## Protected Attributes

|Type|Name|
|-----|-----|
|double|[**x**](class_sprite.md#1abb2fa14e95603ee91d7acf652f1a9714)<br>x position |
|double|[**dx**](class_sprite.md#1a43563b440ecac191e24423f6aa6cac0e)<br>change in x ; updated on interval in forceVisitor |
|double|[**y**](class_sprite.md#1a9d25f913409312b76b63e2f4e70c9635)<br>y position |
|double|[**dy**](class_sprite.md#1a5b7e4e3eddfdc561a5782e39a3887145)<br>change in y ; updated on interval in forceVisitor TODO: perhaps update dy not on force visitor? |
|double|[**height**](class_sprite.md#1a064ac3cdbeaab442437614b89cc3fbdf)<br>height of sprite |
|double|[**width**](class_sprite.md#1a11f560edfc52252310a1d1926c35e624)<br>width of sprite |
|std::string|[**textureLoc**](class_sprite.md#1a593e7e858553d0d8c381c5465aafe2d5)<br>location of image for sprite texture |


## Public Functions

|Type|Name|
|-----|-----|
||[**Sprite**](class_sprite.md#1a12cba3ac1868418add3c4d95ce87e615) () <br>Construct a new **[Sprite](class_sprite.md)** object. |
||[**Sprite**](class_sprite.md#1a7e4993a9c9a455eed275619044ea8dc3) (std::string textureLoc, double x, double y, double width, double height) <br>Construct a new **[Sprite](class_sprite.md)** object. |
|double|[**getX**](class_sprite.md#1a836a8eccd754b6b47015bf7135a45822) () |
|double|[**getY**](class_sprite.md#1a1ee7bf62ec0827a9b9d0cf110e72a0f9) () |
|void|[**setXY**](class_sprite.md#1a4371a6d9f2d115792e0162e1b081d1d3) (double X, double Y) <br>set new coords of sprite |
|double|[**getDX**](class_sprite.md#1ac91a9c290d04131dcf58dbc16a8a0087) () <br>get dx |
|double|[**getDY**](class_sprite.md#1a1ed4900e5552ef0c825f8ef44b6924f1) () <br>get dy |
|void|[**setDXY**](class_sprite.md#1a22c2404f812d8c85a722c662f23526cb) (double x, double y) <br>set dx and dy |
|double|[**getHeight**](class_sprite.md#1ad873b213ffef762022bed0a7345788f5) () <br>Get the Height object. |
|double|[**getWidth**](class_sprite.md#1ac99e1dda38ec34aad46dd323e55a1c17) () <br>Get the Width object. |
|std::string|[**getTextureLocation**](class_sprite.md#1a8f21d4ce51d3b96cfb7df1a8ad03ce27) () <br>Get the Texture Location object. |


## Protected Attributes Documentation

### variable <a id="1abb2fa14e95603ee91d7acf652f1a9714" href="#1abb2fa14e95603ee91d7acf652f1a9714">x</a>

```cpp
double Sprite::x;
```

x position 


### variable <a id="1a43563b440ecac191e24423f6aa6cac0e" href="#1a43563b440ecac191e24423f6aa6cac0e">dx</a>

```cpp
double Sprite::dx;
```

change in x ; updated on interval in forceVisitor 


### variable <a id="1a9d25f913409312b76b63e2f4e70c9635" href="#1a9d25f913409312b76b63e2f4e70c9635">y</a>

```cpp
double Sprite::y;
```

y position 


### variable <a id="1a5b7e4e3eddfdc561a5782e39a3887145" href="#1a5b7e4e3eddfdc561a5782e39a3887145">dy</a>

```cpp
double Sprite::dy;
```

change in y ; updated on interval in forceVisitor TODO: perhaps update dy not on force visitor? 


### variable <a id="1a064ac3cdbeaab442437614b89cc3fbdf" href="#1a064ac3cdbeaab442437614b89cc3fbdf">height</a>

```cpp
double Sprite::height;
```

height of sprite 


### variable <a id="1a11f560edfc52252310a1d1926c35e624" href="#1a11f560edfc52252310a1d1926c35e624">width</a>

```cpp
double Sprite::width;
```

width of sprite 


### variable <a id="1a593e7e858553d0d8c381c5465aafe2d5" href="#1a593e7e858553d0d8c381c5465aafe2d5">textureLoc</a>

```cpp
std::string Sprite::textureLoc;
```

location of image for sprite texture 


## Public Functions Documentation

### function <a id="1a12cba3ac1868418add3c4d95ce87e615" href="#1a12cba3ac1868418add3c4d95ce87e615">Sprite (1/2)</a>

```cpp
Sprite::Sprite ()
```

Construct a new **[Sprite](class_sprite.md)** object. 


### function <a id="1a7e4993a9c9a455eed275619044ea8dc3" href="#1a7e4993a9c9a455eed275619044ea8dc3">Sprite (2/2)</a>

```cpp
Sprite::Sprite (
    std::string textureLoc,
    double x,
    double y,
    double width,
    double height
)
```

Construct a new **[Sprite](class_sprite.md)** object. 



**Parameters:**


* **textureLoc** : file location for texture 
* **x** : x location of sprite relative to size of window 
* **y** : y location of sprite relative to size of window 
* **width** : width of sprite in pixels 
* **height** : height of sprite in pixels 



### function <a id="1a836a8eccd754b6b47015bf7135a45822" href="#1a836a8eccd754b6b47015bf7135a45822">getX</a>

```cpp
double Sprite::getX ()
```




**Returns:**

int x position of sprite 




### function <a id="1a1ee7bf62ec0827a9b9d0cf110e72a0f9" href="#1a1ee7bf62ec0827a9b9d0cf110e72a0f9">getY</a>

```cpp
double Sprite::getY ()
```




**Returns:**

int y Position of sprite 




### function <a id="1a4371a6d9f2d115792e0162e1b081d1d3" href="#1a4371a6d9f2d115792e0162e1b081d1d3">setXY</a>

```cpp
void Sprite::setXY (
    double X,
    double Y
)
```

set new coords of sprite 



**Parameters:**


* **X** new X value of **[Sprite](class_sprite.md)** 
* **Y** new Y value of **[Sprite](class_sprite.md)** 



### function <a id="1ac91a9c290d04131dcf58dbc16a8a0087" href="#1ac91a9c290d04131dcf58dbc16a8a0087">getDX</a>

```cpp
double Sprite::getDX ()
```

get dx 



**Returns:**

double 




### function <a id="1a1ed4900e5552ef0c825f8ef44b6924f1" href="#1a1ed4900e5552ef0c825f8ef44b6924f1">getDY</a>

```cpp
double Sprite::getDY ()
```

get dy 



**Returns:**

double 




### function <a id="1a22c2404f812d8c85a722c662f23526cb" href="#1a22c2404f812d8c85a722c662f23526cb">setDXY</a>

```cpp
void Sprite::setDXY (
    double x,
    double y
)
```

set dx and dy 



**Parameters:**


* **x** new dx 
* **y** new dy 



### function <a id="1ad873b213ffef762022bed0a7345788f5" href="#1ad873b213ffef762022bed0a7345788f5">getHeight</a>

```cpp
double Sprite::getHeight ()
```

Get the Height object. 



**Returns:**

int 




### function <a id="1ac99e1dda38ec34aad46dd323e55a1c17" href="#1ac99e1dda38ec34aad46dd323e55a1c17">getWidth</a>

```cpp
double Sprite::getWidth ()
```

Get the Width object. 



**Returns:**

int 




### function <a id="1a8f21d4ce51d3b96cfb7df1a8ad03ce27" href="#1a8f21d4ce51d3b96cfb7df1a8ad03ce27">getTextureLocation</a>

```cpp
std::string Sprite::getTextureLocation ()
```

Get the Texture Location object. 



**Returns:**

std::string 






----------------------------------------
The documentation for this class was generated from the following file: `classes/Sprite.h`
