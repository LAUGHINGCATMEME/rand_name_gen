#include <iostream>
using namespace std;

static const char alphanum[] = "abcdefghijklmnopqrstuvwxyz";
string gen_random(const int len) {
    string tmp_s;
    tmp_s.reserve(len);
    for (int i = 0; i < len; ++i) {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }    
    return tmp_s;
}        


int main(){
    while (true){
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
            rand_str = gen_random(word.length());
            //cout<<rand_str<<endl;
        }while(rand_str != word);
        time(&end);
        
        // Output
        cout<<no_of_tries<<endl;
        cout<<"Time = "<<(end-start)<<" secs"<<endl;
    }
    return 0;
}
