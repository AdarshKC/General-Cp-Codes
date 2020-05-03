#include <bits/stdc++.h> 
using namespace std; 

string findLongestPalindromicString(string text) { 
    int N = text.size(); 
    string ans="";
    if(N == 0) return ans; 
    N = 2*N + 1;  
    int L[N]; 
    L[0] = 0; 
    L[1] = 1; 
    int C = 1; //centerPosition 
    int R = 2; //centerRightPosition 
    int i = 0; //currentRightPosition 
    int iMirror; //currentLeftPosition 
    int maxLPSLength = 0, maxLPSCenterPosition = 0; 
    int start = -1, end = -1, diff = -1; 
    
    for (i = 2; i < N; i++) { 
        //get currentLeftPosition iMirror for currentRightPosition i 
        iMirror = 2*C-i; 
        L[i] = 0; 
        diff = R - i; 
        //If currentRightPosition i is within centerRightPosition R 
        if(diff > 0) L[i] = min(L[iMirror], diff); 

        //Attempt to expand palindrome centered at currentRightPosition i 
        //Here for odd positions, we compare characters & if match then increment LPS Length by 1
        //If even positions, we just increment LPS by 1 without any character comparison 
        while ( ((i + L[i]) < N && (i - L[i]) > 0) && ( ((i + L[i] + 1) % 2 == 0) || 
            (text[(i + L[i] + 1)/2] == text[(i - L[i] - 1)/2] ))) L[i]++; 

        if(L[i] > maxLPSLength) { // Track maxLPSLength  
            maxLPSLength = L[i]; 
            maxLPSCenterPosition = i; 
        } 

        //If palindrome centered at currentRightPosition i expand beyond centerRightPosition R, 
        //adjust centerPosition C based on expanded palindrome. 
        if (i + L[i] > R) { 
            C = i; 
            R = i + L[i]; 
        } 
    }  
    start = (maxLPSCenterPosition - maxLPSLength)/2; 
    end = start + maxLPSLength - 1; 
    for(int i=0;i<text.size();i++)cout << L[2*i+1] << " ";
    for(i=start; i<=end; i++) ans+=text[i];
    return ans;
}

int main() 
{ 
    string text;
    cin >> text;
    cout << findLongestPalindromicString(text); 
}
