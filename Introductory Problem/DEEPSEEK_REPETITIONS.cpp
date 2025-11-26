#include<iostream>
using namespace std;

int main(){
    int maxCount[26] = {0};  // ?? letter ?? max consecutive count
    int currentCount[26] = {0};
    string fromUser;
    
    cin >> fromUser;
    
    for(unsigned long i = 0; i < fromUser.length(); i++){
        char current = fromUser[i];
        int j = current - 'A';
        
        if(i > 0 && fromUser[i-1] == fromUser[i]){
            currentCount[j]++;
        } else {
            currentCount[j] = 1;
        }
        
        // ?? ???? ?? max update ????
        if(currentCount[j] > maxCount[j]){
            maxCount[j] = currentCount[j];
        }
    }
    
    int overallMax = 0;
    for(int i = 0; i < 26; i++){
        if(maxCount[i] > overallMax){
            overallMax = maxCount[i];
        }
    }
    cout << overallMax;
}
