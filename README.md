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


* complex, 浮點複數 (will make a try)


* int


* extension

       *** pointer (will make a try)

       *** union, 聯合型別: (will make a try)

           每次只有一成員能儲存值。

       *** funcion

# Other Types

* arithmetics types (will make a try) :

         enum extensions with other types
  
* scalar types (will make a try):

         poninter extension with arithmetics

* aggregate types, 聚合型別:

       *** array

       *** structure (will make a try)

#-------------------------------------------------------

# Enum, 細說列舉

 enum [flag] { a list of keys... }
 
 <https://github.com/QueenieCplusplus/Qs_C/blob/day1/0222_enum.c>
 
 #-------------------------------------------------------
 
 # 23 Punctuation marks in Char Set, 字元集中常用的符號
 
               !, exclamation

               " ", double quote

               %

               #

               '', sigle quote

               (), parentheses for param

               *, asterisk

               +

               ,, comma

               -, dash 

               /. slash

               :, colon

               ;, semicolon

               <

               =

               >

               ?

               [], brackets

               \, back slash

               ^

               _

               {}, brace

               ~, swing dash
               
#-------------------------------------------------------
 
# Unicode in Char Set, 編碼

Ascii, 7 bits

Unicode, 8 bits (1 byte)

wchar_t, UTF-16 | UTF-32

        #include <stddef.h>
        wchar_t wc = '\x3b1'; //使用16進制格式存入變數
        
        #include <uchar.h>
        //define char16_t using _STDC_UTF_16_ 巨集
        //define char32_t using _STDC_UTF_32_ 巨集

多位元組-char, UTF-8

         byte 中的 char-val 由 string | stream 所在的內容決定。
         每個字元由 1 ~ 4 個 bites 所表示。（不同的字元編碼寬度）



(to be continued)
