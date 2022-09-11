#include <iostream>
#include <string>
using namespace std;

static const char alphanum[] = "abcdefghijklmnopqrstuvwxyz";
string gen_random(const int len){
    string tmp_s;
    tmp_s.reserve(len);
    for (int i = 0; i < len; ++i){
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    return tmp_s;
}

int main(){
    while (true){
        // Variables
        string word, rand_str;
        clock_t start, end;
        bool brk;
        int no_of_tries = 0;
        string str = "abcdefghijklmnopqrstuvwxyz";

        // Cheack if valid input
        do{
            cout << "8========================D ";
            cin >> word;
            brk = 0;
            for (int i = 0; i < word.length(); i++){
                if (str.find(word[i]) == string::npos){
                    brk = 1;
                    cout<<"Wrong input nigga"<<endl;
                }
            }
        }while(brk);

        // Loop
        time(&start);
        do{
            no_of_tries++;
            rand_str = gen_random(word.length());
            //cout<<rand_str<<endl;
        } while (rand_str != word);
        time(&end);

        // Output
        cout << no_of_tries << endl << "Time = " << (end - start) << " secs" << endl << endl;
    }
    return 0;
}
