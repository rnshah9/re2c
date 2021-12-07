/* Generated by re2c */
// re2rust $INPUT -o $OUTPUT

const YYMAXFILL: usize = 1;


// expect YYMAXFILL-padded string
fn lex(s: &[u8]) -> isize {
    let mut count = 0;
    let mut cursor = 0;

    let mut buf = Vec::with_capacity(s.len() + YYMAXFILL);
    buf.extend(s.iter());
    buf.extend(vec![0; YYMAXFILL]);

    'lex: loop {
{
	let mut yych : u8 = 0;
	let mut yystate : usize = 0;
	loop {
		match yystate {
			0 => {
				if cursor + 1 > buf.len() { return -1; }
				yych = unsafe {*buf.get_unchecked(cursor)};
				cursor += 1;
				match yych {
					0x00 => {
						yystate = 1;
						continue;
					}
					0x20 => {
						yystate = 5;
						continue;
					}
					0x27 => {
						yystate = 8;
						continue;
					}
					_ => {
						yystate = 3;
						continue;
					}
				}
			}
			1 => {
				yystate = 2;
				continue;
			}
			2 => {
				{ return if cursor == s.len() + 1 { count } else { -1 }; }
			}
			3 => {
				yystate = 4;
				continue;
			}
			4 => {
				{ return -1; }
			}
			5 => {
				if cursor + 1 > buf.len() { return -1; }
				yych = unsafe {*buf.get_unchecked(cursor)};
				yystate = 6;
				continue;
			}
			6 => {
				match yych {
					0x20 => {
						cursor += 1;
						yystate = 5;
						continue;
					}
					_ => {
						yystate = 7;
						continue;
					}
				}
			}
			7 => {
				{ continue 'lex; }
			}
			8 => {
				if cursor + 1 > buf.len() { return -1; }
				yych = unsafe {*buf.get_unchecked(cursor)};
				yystate = 9;
				continue;
			}
			9 => {
				cursor += 1;
				match yych {
					0x27 => {
						yystate = 10;
						continue;
					}
					0x5C => {
						yystate = 12;
						continue;
					}
					_ => {
						yystate = 8;
						continue;
					}
				}
			}
			10 => {
				yystate = 11;
				continue;
			}
			11 => {
				{ count += 1; continue 'lex; }
			}
			12 => {
				if cursor + 1 > buf.len() { return -1; }
				yych = unsafe {*buf.get_unchecked(cursor)};
				cursor += 1;
				yystate = 8;
				continue;
			}
			_ => {
				panic!("internal lexer error")
			}
		}
	}
}
}
}

fn main() {
    assert_eq!(lex(b""), 0);
    assert_eq!(lex(b"'qu\0tes' 'are' 'fine: \\'' "), 3);
    assert_eq!(lex(b"'unterminated\\'"), -1);
}
