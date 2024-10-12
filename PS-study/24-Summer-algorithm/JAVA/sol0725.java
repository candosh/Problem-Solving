import java.util.ArrayList;
import java.util.List;

public class sol0725 {
	 public int[] solution(int []arr) {
        if (arr.length == 0) {
            return new int[0];
        }
        
        List<Integer> list = new ArrayList<>();
        list.add(arr[0]);
        
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] != arr[i - 1]) {
                list.add(arr[i]);
            }
        }
        
        int[] answer = new int[list.size()];
        for (int i = 0; i < list.size(); i++) {
            answer[i] = list.get(i);
        }
        
        return answer;
    }
}