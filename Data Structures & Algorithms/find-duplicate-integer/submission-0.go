func findDuplicate(nums []int) int {
    l , r:= 0 , 1
    for l < len(nums)- 1 {
      if nums[l]== nums[r]{
        return nums[l]
      }
      r++

      if r == len(nums){
        l++
        r = l+1
      }
    }
    return -1
}
