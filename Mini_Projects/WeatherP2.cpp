// Anas Jamil
// 100864684

#include <iostream>
using namespace std;

const int MAX_SIZE = 1000;       


int odd(int l1[], int m, int l2[], int n, int l3[]) {              
    int count = 0;                                                                
    for (int i = 0; i < m; i++) {                                                 
        if (l1[i] % 2 != 0) {
            l3[count] = l1[i];
            count++;                                                  
        }
    }
    for (int i = 0; i < n; i++) {                                       
        if (l2[i] % 2 != 0) {
            l3[count] = l2[i];
            count++;                                                    
        }
    }
    return count;                                                        
}

int even(int l1[], int m, int l2[], int n, int l3[]) {
    int count = 0;                                                                 
    for (int i = 0; i < m; i++) {                                                 
        if (l1[i] % 2 == 0) {
            l3[count] = l1[i];
            count++;                                                                   
        }
    }
    for (int i = 0; i < n; i++) {                                                     
        if (l2[i] % 2 == 0) {
            l3[count] = l2[i];
            count++;                                                        
        }
    }
    return count;                                                                   
}

int merge(int l1[], int m, int l2[], int n, int l3[]) {
    int count = 0;                                                                     
    for (int i = 0; i < m; i++) {                                                               
        l3[count] = l1[i];
        count++;                                                                          
    }
    for (int i = 0; i < n; i++) {                                                               
        l3[count] = l2[i];
        count++;                                                                                 
    }
    return count;                                                                          
}

int Sort(int l1[], int m, int l2[], int n, int l3[]) {
    int i = 0, j = 0, k = 0;                                                                   
    while (i < m && j < n) {                                                               
        if (l1[i] <= l2[j]) {
            l3[k] = l1[i];
            i++;                                                                                       
        }
        else {
            l3[k] = l2[j];
            j++;                                                         
        }
        k++;                                                  
    }
    while (i < m) {                                               
        l3[k] = l1[i];
        i++;                                                                   
        k++;                                                    
    }
    while (j < n) {                                           
        l3[k] = l2[j];
        j++;                                                         
        k++;                                                           
    }
    for (i = 0; i < m + n - 1; i++) {                               
        int min_idx = i;                                
        for (j = i + 1; j < m + n; j++) {                               
            if (l3[j] < l3[min_idx]) {
                min_idx = j;                                       
            }
        }
        int temp = l3[i];
        l3[i] = l3[min_idx];
        l3[min_idx] = temp;
    }
    return m + n;                             
}
int show(int list[], int size) {                                    
    for (int i = 0; i < size; i++) {                                    
        cout << list[i] << " ";                                        
    }
    cout << endl;                                                   
}

int main() {
    int size;                                                
    cout << "Enter size of list 1: ";                  
    cin >> size;                                              

    int l1[size];
    for (int i = 0; i < size; i++) {                       
        cout << "value for list 1:";                      
        cin >> l1[i];
    }
    cout << "Array values: ";                      
    for (int i = 0; i < size; i++) {                     
        cout << l1[i] << " " << endl;
    }                    

    int size1;                                     
    cout << "Enter array size of list 2: ";          
    cin >> size1;                                         

    int l2[size1];
    for (int i = 0; i < size1; i++) {                      
        cout << "Enter value for list 1:";                      
        cin >> l2[i];
    }
    cout << "Array values: ";                        
    for (int i = 0; i < size1; i++) {                       
        cout << l2[i] << " " << endl;
    }                                  

    int l3[size + size1];
    int k;                                  

    cout << "Elements of list 1: " << endl;                      
    show(l1, size);

    cout << "Elements of list 2: " << endl;                          
    show(l2, size1);

    k = odd(l1, size, l2, size1, l3);
    cout << "Odd numbers: ";                           
    show(l3, k);

    k = even(l1, size, l2, size1, l3);
    cout << "Even numbers: ";                          
    show(l3, k);

    k = merge(l1, size, l2, size1, l3);
    cout << "Merged: ";                                 
    show(l3, k);

    k = Sort(l1, size, l2, size1, l3);
    cout << "Sorted: ";                                    
    show(l3, k);

    return 0;                                             
}