class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
    int[] num3=new int[nums1.length+nums2.length];
    for(int i=0;i<nums1.length;i++){
        num3[i]=nums1[i];
    }
    int c=nums1.length;
    for(int j=0;j<nums2.length;j++){
        num3[c]=nums2[j];
        c++;
    }
    Arrays.sort(num3);
    double midodd;
    int mideven;
    if(num3.length % 2!=0){
        mideven=num3.length/2;
        return num3[mideven];
    }
    else{
        int mid1=num3.length /2;
        int mid2=mid1-1;
        midodd=num3[mid1]+num3[mid2];
        midodd=midodd/2;
        return midodd;
    }
}
}