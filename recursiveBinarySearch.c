int binarySearch(int* array, int target, int start, int end){
    if (start <= end){
        int mid = start + (end - start) / 2;
        if (*array[mid] == target) return mid;
        if (*array[mid] < target) return binarySearch(array, target, mid+1, end);
        return binarySearch(array, target, start, mid-1);
    }
    return -1;
}