use std::env::args;

pub struct Package {
    args: Option<Vec<String>>,
}

impl Package {
    pub fn new() -> Result<Self, String> {
        let raw_args: Vec<String> = args().skip(1).collect();
        let args: Result<Vec<String>, String>;
        if raw_args.len() == 1 {
            args = stacked_parse(raw_args[0]);
        } else if raw_args.len() > 1 {
            args = splitted_parse(raw_args);
        }
        match args {
            Ok(content) => Ok(Self {
                args: Some(content),
            }),
            Err(msg) => Err(msg),
        }
    }
}

fn stacked_parse(argument: String) -> Result<Vec<String>, String> {}
fn splitted_parse(arguments: Vec<String>) -> Result<Vec<String>> {}
