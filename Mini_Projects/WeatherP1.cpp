//Anas Jamil
//100864684

#include <iostream>
#include <fstream>
using namespace std;

const int Array_Size = 22;     

double sum(double arr[], int size) {            
    double total = 0;                        
    for (int i = 0; i < size; i++) {               
        total += arr[i];                            
    }
    return total;                              
}
double average(double arr[], int size) {                   
    double total = sum(arr, size);                         
    return total / size;                                   
}

double min(double arr[], int size) {                       
    double mins = arr[0];                                
    for (int i = 1; i < size; i++) {                        
        if (arr[i] < mins) {                                      
            mins = arr[i];                                        
        }
    }
    return mins;                                            
}

double max(double arr[], int size) {                       
    double maxs = arr[0];                               
    for (int i = 1; i < size; i++) {                       
        if (arr[i] > maxs) {                             
            maxs = arr[i];                                    
        }
    }
    return maxs;                                                  
}
void reverse(double arr[], int size) {                  
    for (int i = 0; i < size / 2; i++) {                   
        int j = size - 1 - i;                                
        double temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;                                    
    }
}

int search(double arr[], int size, double target) {                  
    for (int i = 0; i < size; i++) {                                 
        if (arr[i] == target) {                                  
            return i;                                                 
        }
    }
    return -1; 
}
void sort(double arr[], int size) {                      
    for (int i = 0; i < size - 1; i++) {                      
        for (int j = 0; j < size - i - 1; j++) {              
            if (arr[j] > arr[j + 1]) {                         
                double temp = arr[j];                           
                arr[j] = arr[j + 1];                            
                arr[j + 1] = temp;                                  
            }
        }
    }
}
void show(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void reset(double temps[], double temp2[], int size) {                         
    for (int i = 0; i < size; i++) {                                                
        temp2[i] = temps[i];                                                    
    }
}

int main() {
    double temp[Array_Size];     
    double temp1[Array_Size];      
    int Array_Num = 0;              

    ifstream inFile("temprature.txt");      
    if (!inFile) {                
        cerr << "Error" << endl;        
        return 1;                       
    }
    while (Array_Num < Array_Size && inFile >> temp[Array_Num]) {            
        Array_Num++;                           
    }
    inFile.close();         

    double tempsSum = sum(temp, Array_Num);                   
    cout << "Temp Sum: " << tempsSum << endl;        

    double tempsAvg = average(temp, Array_Num);               
    cout << "Temp Average: " << tempsAvg << endl;     

    double minTemp = min(temp, Array_Num);                  
    cout << "Temp Min: " << minTemp << endl;           

    double maxTemp = max(temp, Array_Num);                   
    cout << "Temp Max: " << maxTemp << endl;         

    reset(temp, temp1, Array_Num);                  

    sort(temp1, Array_Num);                               
    cout << "Sorted Temps: ";                           
    show(temp1, Array_Num);                           

    reset(temp, temp1, Array_Num);                  

    reverse(temp1, Array_Num);                                 
    cout << "Reversed Temps: ";                             
    show(temp1, Array_Num);                                  

    reset(temp, temp1, Array_Num);                       

    double target;                                              
    cout << "Insert Temperature: " << endl;         
    cin >> target;                                                  
    int searchIndex = search(temp1, Array_Num, target);               
    if (searchIndex != -1) {                                                
        cout << "Temperature " << target << " found " << searchIndex << endl;                      
    }
    else {
        cout << "Temperature " << target << " not found " << endl;           
    }

    cout << "Elements: " << endl;                    
    show(temp, Array_Num);                                         

    return 0;                 
}