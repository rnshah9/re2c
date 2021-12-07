/* Generated by re2c */
// re2rust $INPUT -o $OUTPUT

// expect a null-terminated string
fn lex(s: &[u8]) -> isize {
    let mut count = 0;
    let mut cursor = 0;
    let mut marker = 0;
    let limit = s.len() - 1; // null-terminator not included

    'lex: loop {
{
	let mut yych : u8 = 0;
	let mut yystate : usize = 0;
	loop {
		match yystate {
			0 => {
				yych = unsafe {*s.get_unchecked(cursor)};
				match yych {
					0x20 => {
						cursor += 1;
						yystate = 3;
						continue;
					}
					0x27 => {
						cursor += 1;
						yystate = 6;
						continue;
					}
					_ => {
						if cursor >= limit {
							yystate = 12;
							continue;
						}
						cursor += 1;
						yystate = 1;
						continue;
					}
				}
			}
			1 => {
				yystate = 2;
				continue;
			}
			2 => {
				{ return -1; }
			}
			3 => {
				yych = unsafe {*s.get_unchecked(cursor)};
				yystate = 4;
				continue;
			}
			4 => {
				match yych {
					0x20 => {
						cursor += 1;
						yystate = 3;
						continue;
					}
					_ => {
						yystate = 5;
						continue;
					}
				}
			}
			5 => {
				{ continue 'lex; }
			}
			6 => {
				marker = cursor;
				yych = unsafe {*s.get_unchecked(cursor)};
				if yych >= 0x01 {
					yystate = 8;
					continue;
				}
				if cursor >= limit {
					yystate = 2;
					continue;
				}
				cursor += 1;
				yystate = 7;
				continue;
			}
			7 => {
				yych = unsafe {*s.get_unchecked(cursor)};
				yystate = 8;
				continue;
			}
			8 => {
				match yych {
					0x27 => {
						cursor += 1;
						yystate = 9;
						continue;
					}
					0x5C => {
						cursor += 1;
						yystate = 11;
						continue;
					}
					_ => {
						if cursor >= limit {
							yystate = 13;
							continue;
						}
						cursor += 1;
						yystate = 7;
						continue;
					}
				}
			}
			9 => {
				yystate = 10;
				continue;
			}
			10 => {
				{ count += 1; continue 'lex; }
			}
			11 => {
				yych = unsafe {*s.get_unchecked(cursor)};
				if yych <= 0x00 {
					if cursor >= limit {
						yystate = 13;
						continue;
					}
					cursor += 1;
					yystate = 7;
					continue;
				}
				cursor += 1;
				yystate = 7;
				continue;
			}
			12 => {
				{ return count; }
			}
			13 => {
				cursor = marker;
				yystate = 2;
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
    assert_eq!(lex(b"\0"), 0);
    assert_eq!(lex(b"'qu\0tes' 'are' 'fine: \\'' \0"), 3);
    assert_eq!(lex(b"'unterminated\\'\0"), -1);
}
