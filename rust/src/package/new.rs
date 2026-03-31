use super::parse::parse;
use std::env::args;

#[derive(Debug)]
pub struct Package {
    args: Vec<i32>,
}

impl Package {
    pub fn new() -> Result<Self, String> {
        let raw_args: Vec<String> = args().skip(1).collect();
        let args: Result<Vec<i32>, String>;
        if raw_args.len() == 1 {
            args = parse(raw_args[0].split_whitespace().map(String::from).collect());
        } else if raw_args.len() > 1 {
            args = parse(raw_args);
        } else {
            args = Err(String::from("Missing argument(s)"));
        }
        match args {
            Ok(content) => Ok(Self { args: content }),
            Err(msg) => Err(msg),
        }
    }
}
