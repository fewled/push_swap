use super::Stack;
use super::parse::parse;
use std::env::args;

#[derive(Debug)]
pub struct Package {
    a: Stack,
    b: Stack,
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
            }),
            Err(msg) => Err(msg),
        }
    }
    pub fn get_a(&mut self) -> &mut Stack {
        &mut self.a
    }
    pub fn get_b(&mut self) -> &mut Stack {
        &mut self.b
    }
}
