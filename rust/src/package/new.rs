use super::parse::parse;
use super::{Set, Stack};
use std::env::args;

#[derive(Debug)]
pub struct Package {
    pub(crate) a: Stack,
    pub(crate) b: Stack,
    pub(crate) current: Set,
    pub(crate) best: Set,
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
            Ok(content) => Ok(Self {
                a: Stack::new(Some(content)),
                b: Stack::new(None),
                current: Set::new(),
                best: Set::new(),
            }),
            Err(msg) => Err(msg),
        }
    }
}
