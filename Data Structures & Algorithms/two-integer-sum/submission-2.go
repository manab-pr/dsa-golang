func twoSum(nums []int, target int) []int {
    mp := make(map[int]int)

    for i , num := range nums {
        mp[num] = i 
    }
    for i , num := range nums {
        diff := target - num 

        if  j , found := mp[diff] ; found && j != i {
            return []int{i,j}
        }
    }
    return []int{}
}
