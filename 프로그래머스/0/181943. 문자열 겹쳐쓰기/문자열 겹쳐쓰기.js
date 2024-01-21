function solution(my_string, overwrite_string, s) {
    var answer = '';
    let my_str = '';
    my_str = [...my_string]
    my_str.splice(s, overwrite_string.length, overwrite_string)
    
    answer = my_str.join('')
    return answer;
}