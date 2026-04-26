class Solution {
    public long hashFunction(String str) {
        int n = str.length();
        long hash = 0;
        for (int i = 0; i < n; i++) {
            hash += (str.charAt(i) + 1) *  (str.charAt(i) + 1);
        }

        return hash;
    }

    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap <Long, ArrayList<String>> map = new HashMap <Long, ArrayList<String>>();

        for (String str: strs) {
            Long hash = hashFunction(str);
            if (!map.containsKey(hash)) {
                map.put(hash, new ArrayList<String>());
            }
            map.get(hash).add(str);
        }

        List<List<String>> answer = new ArrayList<>();
        for (Long key: map.keySet()) {
            answer.add(map.get(key));
        }

        return answer;
    }
}
