#include <iostream>
using namespace std;

//array of a-z
char letters_s[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };

// Generates random strings of numbers of n_o_l letters
string RandomGen(int n_o_l){
    string reasult = "";
    for (int i = 0; i < n_o_l;  i++){
        reasult = reasult + letters_s[rand() % 26];
    }
    return reasult;
}
        


int main(){
    // Variables
    string word, rand_str;
    clock_t start, end;
    int no_of_tries = 0;
    cout<<"8=====D ";
    cin>>word;
    
    // Loop
    time(&start);
    do{
        no_of_tries++;
        rand_str = RandomGen(size(word));
        //cout<<rand_str<<endl;
    }while(rand_str != word);
    time(&end);
    
    // Output
    cout<<no_of_tries<<endl;
    cout<<"Time = "<<(end-start)<<" secs"<<endl;
    return 0;
}
