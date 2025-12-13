#include <iostream>
#include <cstring>
using namespace std;

void lowerCase(char word[], int n){
    
    for (int i=0; i<n; i++ ){
        char ch = word[i];
        if(ch>='a' && ch<='z'){
            continue;
        }else {
             ch = ch - 'A' + 'a';
        }
    }
}

void reverse(char word[], int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(word[start++], word[end--]);
    }
}

bool palindrome(char word[], int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        if(word[start++] != word[end--]){
            cout<<"Not A Palindrome"<<endl;
            return false;
        }
    }
    cout<<"Is a Palindrome"<<endl;
    return true;
}

int main() {

    char word[]={"MADAM"};

    // lowerCase(word, strlen(word));
    reverse(word, strlen(word));
    palindrome(word, strlen(word));
    cout<<word<<endl;


    return 0;
}
