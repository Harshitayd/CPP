class Solution {
    public int findKthLargest(int[] nums, int k) {
        int a = k;
        TreeMap<Integer , Integer> map = new TreeMap<>();
        for(int i = 0 ; i < nums.length ; i++){
            map.put(nums[i] , map.getOrDefault(nums[i] ,0) +1);
        }
        for (Map.Entry<Integer, Integer> entry : map.descendingMap().entrySet()) {
    a = a - entry.getValue();
    if (a <= 0) { 
        return entry.getKey();
    }
}

        return 0;
    }
}