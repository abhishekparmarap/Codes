// #include <iostream>
// using namespace std;

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int partition(int a[], int low, int high)
// {
//     int pivot = a[low];
//     int i = low;
//     int j = high;
//     while(i<j){
//         while (a[i]<=pivot){i++;}
//         while (a[j]>pivot){j--;}
//         if(i<j){swap(&a[i],&a[j]);}
//     }
//     swap(&a[j],&a[low]);
//     return j;
// }

// void quicksort(int a[], int low, int high)
// {
//     if (low < high)
//     {
//         int pivot = partition(a, low, high);
//         quicksort(a, low, pivot - 1);
//         quicksort(a, pivot + 1, high);
//     }
// }

// int main()
// {
//     int a[] = {10, 8, 57, 87, 5};
//     int n = sizeof(a) / sizeof(a[0]);
//     cout << "element of array are ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     quicksort(a, 0, n - 1);
//     cout << "\nelement of array are ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     return 0;
// }




#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
    // Open a file to save the output
    ofstream outputFile("traceroute_output.csv");
    // Write the CSV header to the file
    // outputFile << "Hop,Time 1,Time 2,Time 3,IP Address" << endl;

    // Use popen to run the traceroute command and store the output in a file
    FILE *fp = popen("tracert www.facebook.com", "r");
    char buffer[1024];
    string line;
    int hop = 1;
    while (fgets(buffer, sizeof(buffer), fp)) {
        line = buffer;
        // Check if the line contains the IP address
        if (line.find("[") != string::npos) {
            // Extract the IP address
            int start = line.find("[") + 1;
            int end = line.find("]");
            string ip = line.substr(start, end - start);
            // Extract the times
            int time1, time2, time3;
            sscanf(line.c_str(), "%*s %dms %dms %dms", &time1, &time2, &time3);
            // Write the data to the file in the specified CSV format
            outputFile << hop << "," << time1 << "ms," << time2 << "ms," << time3 << "ms," << ip << endl;
            hop++;
        }
    }
    // Close the file
    outputFile.close();
    pclose(fp);
    return 0;
}


