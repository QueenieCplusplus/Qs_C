# Qs_C

CLang

![c](https://cdn2.iconfinder.com/data/icons/royal-crowns/512/royal-alphabet-crown-letter-english-c-512.png)

# 特性

* Portable, to Operation System Design, due to light-weight interpreter

* to Hardware Design

* Proficience

# 關於可攜性的提醒

倘若程式設計師使用非標準函式庫，則可攜性將受限，程式碼僅能移植至程式庫支援的系統上。

# code

(plz see codebase directly.)

# More Concept 

* Define func equals to func declaration. 函數的定義也是宣告。

* No Nested funcs Occurs in C, 無巢狀函式現象，可在區塊內定義區域變數，不可再行定義區域函數。

* PrePorcessor declaration & Global declaration, 架構中模組化的過程，原始檔重視前置預處理器宣告和全域宣告。

* Indent, 使用縮排表示巢狀意義。

# 表現方式

func(argv1, argv2, ...) 

... 省略號表示 optional 選擇性的參數。

# 環境

* Execution Env, 執行環境（解釋）

* Translation Env, 轉譯環境

兩種環境的字元集如相同則對應，倘若不同，則編譯器將原始碼的字元常數和字串常值裡的字元轉換成後者字元集的元素。

# Can Not Be Print Out

* null

* alert

* backspace, 退格

* carraige return, 歸位

# To Print Out Escaping Symbol

* \ (back slash) to be add on before escaping symbol, to mapping above mentioned symbols:

* \0

* \a

* \b

* \r

# 編譯器

       
               Interpreter            Linker
                  

      source file   ->   object file.  ->   Execution File

                         standard lib

                         3rd party lib
                         
                         
# 型態類別

* void


* enum


* float


* floats


* int


* extension

*** pointer

*** union, 聯合型別: 

    每次只有一成員能儲存值。

*** funcion

# Other Types

* arithmetics types:

  enum extensions with other types
  
* scalar types

  poninter extension with arithmetics

* aggregate types, 聚合型別:

*** array

*** structure



(to be continued)
