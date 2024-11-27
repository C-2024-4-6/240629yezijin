#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            list3[k++] = list1[i++];
        }
        else {
            list3[k++] = list2[j++];
        }
    }
    while (i < size1) {
        list3[k++] = list1[i++];
    }
    while (j < size2) {
        list3[k++] = list2[j++];
    }
}
int main() {
    int s1 ,s2 ;
    int l1[80], l2[80], l3[80];
    cout << "Enter list1:";
    cin >> s1;
    for (int i = 0; i < s1; i++)
        cin >> l1[i];
    cout<<"Enter list2:";
    cin >> s2;
    for (int i = 0; i < s2; i++)
        cin >> l2[i];
	merge(l1, s1, l2, s2, l3);
    cout<<"The merged list is:";
    for(int i=0;i<s1+s2;i++)
        cout<<l3[i]<<" ";
	return 0;
}