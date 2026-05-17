func findMin(nums []int) int {
	length := len(nums)

	// already sorted
	if nums[0] < nums[length-1] {
		return nums[0]
	}

	for i, num := range nums {

		// prevent index out of range
		if i < length-1 && num > nums[i+1] {
			return nums[i+1]
		}
	}

	return nums[0]
}