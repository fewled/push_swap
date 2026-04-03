use super::parse::parse;
use super::{Set, Stack};
use std::env::args;

#[derive(Debug)]
pub struct Package {
    a: Stack,
    b: Stack,
    current: Set,
    best: Set,
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
    pub fn get_a(&mut self) -> &mut Stack {
        &mut self.a
    }
    pub fn get_b(&mut self) -> &mut Stack {
        &mut self.b
    }
    pub fn get_current(&mut self) -> &mut Set {
        &mut self.current
    }
    pub fn get_best(&mut self) -> &mut Set {
        &mut self.best
    }
}
