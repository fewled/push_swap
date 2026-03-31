use std::collections::HashSet;

pub fn parse(list: Vec<String>) -> Result<Vec<i32>, String> {
    let parsed_list = list.iter().map(|element| element.parse::<i32>()).collect();
    match parsed_list {
        Ok(list) => check(list),
        Err(msg) => Err(msg.to_string()),
    }
}

fn check(list: Vec<i32>) -> Result<Vec<i32>, String> {
    if list.len() < 2 {
        return Err(String::from("Not enough element"));
    }
    if let Err(msg) = check_duplicate(&list) {
        return Err(msg);
    }
    if let true = check_if_sorted(&list) {
        return Err(String::from("Already sorted"));
    }
    Ok(list)
}

fn check_duplicate(list: &Vec<i32>) -> Result<(), String> {
    let mut checker = HashSet::new();
    let mut duplicates = Vec::new();
    for element in list {
        if !checker.insert(element) {
            duplicates.push(element);
        }
    }
    if duplicates.len() > 0 {
        return Err(String::from("Duplicate(s) found"));
    }
    Ok(())
}

fn check_if_sorted(list: &Vec<i32>) -> bool {
    list.windows(2).all(|pair| pair[0] < pair[1])
}
