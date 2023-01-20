#include <iostream>
#include <vector>
#include <assert.h> 

void swappa(std::vector<int> &A){
    if (A.size() < 1)
      return;
    int b = A[A.size()-1]; // save last element

    for(unsigned int i = A.size() - 1; i >= 1 ; i--){
        // first_letters.push_back(A[i]);
        A[i] = A[i - 1];
    }
    A[0] = b;    
}




std::vector<int> solution(std::vector<int> &A, int K) {
    for(int i = 0; i < K; i++){
        swappa(A);
    }
    return A;
}


int main() {

// Test case 1
std::vector<int> A1{3, 5, 8, 12, 17} ; 
int k1 = 3; 
A1 = solution(A1, k1); 
assert(A1[0] == 8 && A1[1] == 12 && A1[2] == 17 && A1[3] == 3 && A1[4] == 5); 

// Test case 2
A1 = solution(A1, 0); 
assert(A1[0] == 8 && A1[1] == 12 && A1[2] == 17 && A1[3] == 3 && A1[4] == 5); 

// Test case 3
A1 = solution(A1, 5); 
assert(A1[0] == 8 && A1[1] == 12 && A1[2] == 17 && A1[3] == 3 && A1[4] == 5); 

// Test case 4
A1 = solution(A1, 10); 
assert(A1[0] == 8 && A1[1] == 12 && A1[2] == 17 && A1[3] == 3 && A1[4] == 5); 

// Test case 5
A1 = solution(A1, -1); 
assert(A1[0] == 8 && A1[1] == 12 && A1[2] == 17 && A1[3] == 3 && A1[4] == 5); 

// Test case 6
A1 = solution(A1, 2); 
assert(A1[0] == 3 && A1[1] == 5 && A1[2] == 8 && A1[3] == 12 && A1[4] == 17 ); 


std::cout << "The vector elements are: \n";
for (int i = 0; i < A1.size(); i++)  
  {  

    std::cout << A1[i] << " ";   

  }   

  std::cout << "\n\n"; 
  return 0; 
}

