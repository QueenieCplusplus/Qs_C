// plays the type of enum, at PM6:30 by Queenie

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

// syntax : 
// enum [flag] { ... a list of keys ... }
// flag 即『 標記 』{ 識別字清單 }
// 識別字 為常數，但事實上型別為整數
// keys can be any types, diff from each others.

enum qs_code { csharp, swift, java, python, cplusplus, javascript, perl, ruby, kotlin, php, go, c};

// swtich-case synctax
// switch (v) | switch (ops)
//{
    //case matching1:
        //statement1;
        //break;
    //case matching2:
        //statement2;
        //break;
    //case matching3:
        //statement3;
        //break3;
//}

// return void
const char* langToYear(enum qs_code lang){

    switch (lang){
    case csharp:
        return "2017";
        break;
    case swift|java:
        return "2018";
        printf("my start");
        break;
    case javascript:
        return"2019 Winter";
        break;
    case kotlin:
        return "2019 Spring";
        break;
    default:
        printf( "2020");
        break;
    }

    return "unknown";

}

int main(){

    const char* langToYear(enum qs_code swift);
    return 0;
}




