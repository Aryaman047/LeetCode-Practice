class Solution {
public:

    // Encodes a URL to a shortened URL.
    map <string,string> urlcoder;
    int fnc = 10000;
    string tiny = "http://tinyurl.com/";
    string encode(string longUrl) {
        ++fnc;
        
        tiny+=to_string(fnc);
        urlcoder[tiny] = longUrl;
        return tiny;
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return urlcoder[tiny];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));