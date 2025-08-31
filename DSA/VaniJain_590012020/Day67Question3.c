#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
    int start;
    int end;
} Meeting;
int compare(const void *a, const void *b) 
{
    Meeting *m1 = (Meeting *)a;
    Meeting *m2 = (Meeting *)b;
    return m1->end - m2->end; 
}
int maxMeetings(Meeting arr[], int n) 
{
    qsort(arr, n, sizeof(Meeting), compare);
    int count = 1;          
    int lastEnd = arr[0].end; 
    for (int i = 1; i < n; i++) 
{
        if (arr[i].start >= lastEnd) 
{
            count++;
            lastEnd = arr[i].end;
        }
    }
    return count;
}

int main() {
    Meeting arr[] = {{1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}, {5, 9}};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = maxMeetings(arr, n);
    printf("Maximum number of non-overlapping meetings: %d\n", result);

    return 0;
}
