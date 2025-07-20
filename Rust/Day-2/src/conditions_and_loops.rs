pub(crate) fn conditions() {
    let is_even: bool = true;

    if is_even {
        println!("The number is even");
    } else if !is_even {
        println!("The number is odd");
    }
}

pub(crate) fn simple_loops() {

    for i in 0..10 {
        print!("{} ", i);
    }
}

pub(crate) fn iterating_loops() {
    let sentence: String = String :: from("Rohan is my name");
    let first_word: String = get_first_word(sentence);

    let n = 1000;
    for i in 0..n {
    println! ("Hello, world! {}", i);

    print!("First word is: {}", first_word);
    }
}


fn get_first_word(sentence: String) -> String {
    let mut ans: String = String::from("");
    for char in sentence.chars() {
        ans.push_str(char.to_string().as_str());
        if char == ' ' {
            break;
        }
    }
    return ans;
}