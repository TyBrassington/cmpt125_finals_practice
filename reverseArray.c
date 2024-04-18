void swap(char* a, char* b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
void reverseArray(char *charArray, int nCheck){
    //Base Cases
    if(nCheck <= 1){
        return;
    }
    if (nCheck == 2){
        swap(&charArray[0], &charArray[1]);
        return;
    }

    swap(&charArray[0], &charArray[nCheck-1]);
    reverseArray(charArray + 1, nCheck - 2);
}