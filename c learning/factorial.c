#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while(t--) {
        int n;
        scanf("%d", &n);
        
        int result[200];  // array to store digits of result
        result[0] = 1;    // initialize with 1
        int result_size = 1;
        
        // Multiply result[] by i for i = 2 to n
        for (int i = 2; i <= n; i++) {
            int carry = 0;
            
            for (int j = 0; j < result_size; j++) {
                int prod = result[j] * i + carry;
                result[j] = prod % 10;
                carry = prod / 10;
            }
            
            // Add remaining carry digits
            while (carry) {
                result[result_size] = carry % 10;
                carry /= 10;
                result_size++;
            }
        }
        
        // Print factorial in reverse order
        for (int i = result_size - 1; i >= 0; i--)
            printf("%d", result[i]);
        printf("\n");
    }
    
    return 0;
}
