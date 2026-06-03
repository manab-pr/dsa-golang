/**
 * Definition of Interval:
 * type Interval struct {
 *    start int
 *    end   int
 * }
 */

func canAttendMeetings(intervals []Interval) bool {
   n := len(intervals)
   for i := 0 ; i < n ; i++ {
	A := intervals[i]
	for j := i+1 ; j < n ; j++ {
		B := intervals[j]
		if min(A.end,B.end) > max(A.start , B.start){
			return false
		}
	}
   }
   return true
}
func min(a , b int) int {
	if a < b {
		return a 
	}
	return b
}
func max(a , b int) int {
	if a > b {
		return a
	}
	return b
}