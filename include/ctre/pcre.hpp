#ifndef CTRE__PCRE__HPP
#define CTRE__PCRE__HPP

// THIS FILE WAS GENERATED BY DESATOMAT TOOL, DO NOT MODIFY THIS FILE

namespace ctre {

struct pcre {

// NONTERMINALS:
	struct a {};
	struct b {};
	struct backslash {};
	struct backslash_range {};
	struct block_name2 {};
	struct block_name {};
	struct c {};
	struct class_named_name {};
	struct content2 {};
	struct content_in_capture {};
	struct d {};
	struct e {};
	struct f {};
	struct g {};
	struct h {};
	struct hexdec_repeat {};
	struct i {};
	struct j {};
	struct k {};
	struct l {};
	struct m {};
	struct mod {};
	struct mod_opt {};
	struct n {};
	struct number2 {};
	struct number {};
	struct range {};
	struct repeat {};
	struct s {}; using _start = s;
	struct set2 {};
	struct set {};
	struct string2 {};

// 'action' types:
	struct class_digit: ctll::action {};
	struct class_named_alnum: ctll::action {};
	struct class_named_alpha: ctll::action {};
	struct class_named_ascii: ctll::action {};
	struct class_named_blank: ctll::action {};
	struct class_named_cntrl: ctll::action {};
	struct class_named_digit: ctll::action {};
	struct class_named_graph: ctll::action {};
	struct class_named_lower: ctll::action {};
	struct class_named_print: ctll::action {};
	struct class_named_punct: ctll::action {};
	struct class_named_space: ctll::action {};
	struct class_named_upper: ctll::action {};
	struct class_named_word: ctll::action {};
	struct class_named_xdigit: ctll::action {};
	struct class_nondigit: ctll::action {};
	struct class_nonnewline: ctll::action {};
	struct class_nonspace: ctll::action {};
	struct class_nonword: ctll::action {};
	struct class_space: ctll::action {};
	struct class_word: ctll::action {};
	struct create_hexdec: ctll::action {};
	struct create_number: ctll::action {};
	struct finish_hexdec: ctll::action {};
	struct make_alternate: ctll::action {};
	struct make_back_reference: ctll::action {};
	struct make_capture: ctll::action {};
	struct make_capture_with_name: ctll::action {};
	struct make_lazy: ctll::action {};
	struct make_optional: ctll::action {};
	struct make_possessive: ctll::action {};
	struct make_range: ctll::action {};
	struct make_relative_back_reference: ctll::action {};
	struct make_sequence: ctll::action {};
	struct negate_class_named: ctll::action {};
	struct push_assert_begin: ctll::action {};
	struct push_assert_end: ctll::action {};
	struct push_character: ctll::action {};
	struct push_character_alarm: ctll::action {};
	struct push_character_anything: ctll::action {};
	struct push_character_escape: ctll::action {};
	struct push_character_formfeed: ctll::action {};
	struct push_character_newline: ctll::action {};
	struct push_character_null: ctll::action {};
	struct push_character_return_carriage: ctll::action {};
	struct push_character_tab: ctll::action {};
	struct push_empty: ctll::action {};
	struct push_hexdec: ctll::action {};
	struct push_name: ctll::action {};
	struct push_number: ctll::action {};
	struct repeat_ab: ctll::action {};
	struct repeat_at_least: ctll::action {};
	struct repeat_exactly: ctll::action {};
	struct repeat_plus: ctll::action {};
	struct repeat_star: ctll::action {};
	struct set_combine: ctll::action {};
	struct set_make: ctll::action {};
	struct set_make_negative: ctll::action {};
	struct set_start: ctll::action {};

// (q)LL1 function:
	using _others = ctll::neg_set<'$','\x28','\x29','*','+',',','-','.',':','<','>','?','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','|','0','\x7B','\x7D','1','2','3','4','5','6','7','8','9'>;
	static constexpr auto rule(s, ctll::term<'\\'>) -> ctll::push<ctll::anything, backslash, repeat, string2, content2>;
	static constexpr auto rule(s, ctll::term<'\x28'>) -> ctll::push<ctll::anything, c, repeat, string2, content2>;
	static constexpr auto rule(s, ctll::term<'['>) -> ctll::push<ctll::anything, d, repeat, string2, content2>;
	static constexpr auto rule(s, ctll::term<'^'>) -> ctll::push<ctll::anything, push_assert_begin, repeat, string2, content2>;
	static constexpr auto rule(s, ctll::term<'$'>) -> ctll::push<ctll::anything, push_assert_end, repeat, string2, content2>;
	static constexpr auto rule(s, ctll::set<',','-',':','<','>','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U',']','a','0','V','W','X','Y','Z','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9'>) -> ctll::push<ctll::anything, push_character, repeat, string2, content2>;
	static constexpr auto rule(s, _others) -> ctll::push<ctll::anything, push_character, repeat, string2, content2>;
	static constexpr auto rule(s, ctll::term<'.'>) -> ctll::push<ctll::anything, push_character_anything, repeat, string2, content2>;
	static constexpr auto rule(s, ctll::epsilon) -> ctll::push<push_empty>;
	static constexpr auto rule(s, ctll::set<'\x29','*','+','?','_','\x7B','|','\x7D'>) -> ctll::reject;

	static constexpr auto rule(a, ctll::term<'\\'>) -> ctll::push<ctll::anything, backslash, repeat, string2, content2, make_alternate>;
	static constexpr auto rule(a, ctll::term<'\x28'>) -> ctll::push<ctll::anything, c, repeat, string2, content2, make_alternate>;
	static constexpr auto rule(a, ctll::term<'['>) -> ctll::push<ctll::anything, d, repeat, string2, content2, make_alternate>;
	static constexpr auto rule(a, ctll::term<'^'>) -> ctll::push<ctll::anything, push_assert_begin, repeat, string2, content2, make_alternate>;
	static constexpr auto rule(a, ctll::term<'$'>) -> ctll::push<ctll::anything, push_assert_end, repeat, string2, content2, make_alternate>;
	static constexpr auto rule(a, ctll::set<',','-',':','<','>','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U',']','a','0','V','W','X','Y','Z','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9'>) -> ctll::push<ctll::anything, push_character, repeat, string2, content2, make_alternate>;
	static constexpr auto rule(a, _others) -> ctll::push<ctll::anything, push_character, repeat, string2, content2, make_alternate>;
	static constexpr auto rule(a, ctll::term<'.'>) -> ctll::push<ctll::anything, push_character_anything, repeat, string2, content2, make_alternate>;
	static constexpr auto rule(a, ctll::term<'\x29'>) -> ctll::push<push_empty, make_alternate>;
	static constexpr auto rule(a, ctll::epsilon) -> ctll::push<push_empty, make_alternate>;
	static constexpr auto rule(a, ctll::set<'*','+','?','_','\x7B','|','\x7D'>) -> ctll::reject;

	static constexpr auto rule(b, ctll::term<','>) -> ctll::push<ctll::anything, l>;
	static constexpr auto rule(b, ctll::term<'\x7D'>) -> ctll::push<repeat_exactly, ctll::anything>;

	static constexpr auto rule(backslash, ctll::term<'d'>) -> ctll::push<ctll::anything, class_digit>;
	static constexpr auto rule(backslash, ctll::term<'D'>) -> ctll::push<ctll::anything, class_nondigit>;
	static constexpr auto rule(backslash, ctll::term<'N'>) -> ctll::push<ctll::anything, class_nonnewline>;
	static constexpr auto rule(backslash, ctll::term<'S'>) -> ctll::push<ctll::anything, class_nonspace>;
	static constexpr auto rule(backslash, ctll::term<'W'>) -> ctll::push<ctll::anything, class_nonword>;
	static constexpr auto rule(backslash, ctll::term<'s'>) -> ctll::push<ctll::anything, class_space>;
	static constexpr auto rule(backslash, ctll::term<'w'>) -> ctll::push<ctll::anything, class_word>;
	static constexpr auto rule(backslash, ctll::term<'g'>) -> ctll::push<ctll::anything, ctll::term<'\x7B'>, k>;
	static constexpr auto rule(backslash, ctll::term<'x'>) -> ctll::push<ctll::anything, j>;
	static constexpr auto rule(backslash, ctll::set<'$','\x28','\x29','*','+','-','.','?','A','B','C','E','F','G','H','I','J','K','L','M','O','P','Q','U','V','X','Y','Z','[','\\',']','^','b','c','h','i','j','k','l','m','o','p','q','u','v','y','z','\x7B','|','\x7D','1','2','3','4','5','6','7','8','9'>) -> ctll::push<ctll::anything, push_character>;
	static constexpr auto rule(backslash, ctll::term<'a'>) -> ctll::push<ctll::anything, push_character_alarm>;
	static constexpr auto rule(backslash, ctll::term<'e'>) -> ctll::push<ctll::anything, push_character_escape>;
	static constexpr auto rule(backslash, ctll::term<'f'>) -> ctll::push<ctll::anything, push_character_formfeed>;
	static constexpr auto rule(backslash, ctll::term<'n'>) -> ctll::push<ctll::anything, push_character_newline>;
	static constexpr auto rule(backslash, ctll::term<'0'>) -> ctll::push<ctll::anything, push_character_null>;
	static constexpr auto rule(backslash, ctll::term<'r'>) -> ctll::push<ctll::anything, push_character_return_carriage>;
	static constexpr auto rule(backslash, ctll::term<'t'>) -> ctll::push<ctll::anything, push_character_tab>;

	static constexpr auto rule(backslash_range, ctll::term<'x'>) -> ctll::push<ctll::anything, j>;
	static constexpr auto rule(backslash_range, ctll::term<'a'>) -> ctll::push<ctll::anything, push_character_alarm>;
	static constexpr auto rule(backslash_range, ctll::term<'e'>) -> ctll::push<ctll::anything, push_character_escape>;
	static constexpr auto rule(backslash_range, ctll::term<'f'>) -> ctll::push<ctll::anything, push_character_formfeed>;
	static constexpr auto rule(backslash_range, ctll::term<'n'>) -> ctll::push<ctll::anything, push_character_newline>;
	static constexpr auto rule(backslash_range, ctll::term<'0'>) -> ctll::push<ctll::anything, push_character_null>;
	static constexpr auto rule(backslash_range, ctll::term<'r'>) -> ctll::push<ctll::anything, push_character_return_carriage>;
	static constexpr auto rule(backslash_range, ctll::term<'t'>) -> ctll::push<ctll::anything, push_character_tab>;

	static constexpr auto rule(block_name2, ctll::set<'>','\x7D'>) -> ctll::epsilon;
	static constexpr auto rule(block_name2, ctll::set<'0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','_','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9'>) -> ctll::push<ctll::anything, push_name, block_name2>;

	static constexpr auto rule(block_name, ctll::set<'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','_','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'>) -> ctll::push<ctll::anything, push_name, block_name2>;

	static constexpr auto rule(c, ctll::term<'\\'>) -> ctll::push<ctll::anything, backslash, repeat, string2, content2, make_capture, ctll::term<'\x29'>>;
	static constexpr auto rule(c, ctll::term<'\x28'>) -> ctll::push<ctll::anything, c, repeat, string2, content2, make_capture, ctll::term<'\x29'>>;
	static constexpr auto rule(c, ctll::term<'['>) -> ctll::push<ctll::anything, d, repeat, string2, content2, make_capture, ctll::term<'\x29'>>;
	static constexpr auto rule(c, ctll::term<'?'>) -> ctll::push<ctll::anything, m>;
	static constexpr auto rule(c, ctll::term<'^'>) -> ctll::push<ctll::anything, push_assert_begin, repeat, string2, content2, make_capture, ctll::term<'\x29'>>;
	static constexpr auto rule(c, ctll::term<'$'>) -> ctll::push<ctll::anything, push_assert_end, repeat, string2, content2, make_capture, ctll::term<'\x29'>>;
	static constexpr auto rule(c, ctll::set<',','-',':','>','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U',']','a','0','V','W','X','Y','Z','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9'>) -> ctll::push<ctll::anything, push_character, repeat, string2, content2, make_capture, ctll::term<'\x29'>>;
	static constexpr auto rule(c, _others) -> ctll::push<ctll::anything, push_character, repeat, string2, content2, make_capture, ctll::term<'\x29'>>;
	static constexpr auto rule(c, ctll::term<'.'>) -> ctll::push<ctll::anything, push_character_anything, repeat, string2, content2, make_capture, ctll::term<'\x29'>>;
	static constexpr auto rule(c, ctll::term<'\x29'>) -> ctll::push<push_empty, make_capture, ctll::anything>;
	static constexpr auto rule(c, ctll::set<'*','+','<','_','\x7B','|','\x7D'>) -> ctll::reject;

	static constexpr auto rule(class_named_name, ctll::term<'x'>) -> ctll::push<ctll::anything, ctll::term<'d'>, ctll::term<'i'>, ctll::term<'g'>, ctll::term<'i'>, ctll::term<'t'>, class_named_xdigit>;
	static constexpr auto rule(class_named_name, ctll::term<'d'>) -> ctll::push<ctll::anything, ctll::term<'i'>, ctll::term<'g'>, ctll::term<'i'>, ctll::term<'t'>, class_named_digit>;
	static constexpr auto rule(class_named_name, ctll::term<'b'>) -> ctll::push<ctll::anything, ctll::term<'l'>, ctll::term<'a'>, ctll::term<'n'>, ctll::term<'k'>, class_named_blank>;
	static constexpr auto rule(class_named_name, ctll::term<'c'>) -> ctll::push<ctll::anything, ctll::term<'n'>, ctll::term<'t'>, ctll::term<'r'>, ctll::term<'l'>, class_named_cntrl>;
	static constexpr auto rule(class_named_name, ctll::term<'w'>) -> ctll::push<ctll::anything, ctll::term<'o'>, ctll::term<'r'>, ctll::term<'d'>, class_named_word>;
	static constexpr auto rule(class_named_name, ctll::term<'l'>) -> ctll::push<ctll::anything, ctll::term<'o'>, ctll::term<'w'>, ctll::term<'e'>, ctll::term<'r'>, class_named_lower>;
	static constexpr auto rule(class_named_name, ctll::term<'s'>) -> ctll::push<ctll::anything, ctll::term<'p'>, ctll::term<'a'>, ctll::term<'c'>, ctll::term<'e'>, class_named_space>;
	static constexpr auto rule(class_named_name, ctll::term<'u'>) -> ctll::push<ctll::anything, ctll::term<'p'>, ctll::term<'p'>, ctll::term<'e'>, ctll::term<'r'>, class_named_upper>;
	static constexpr auto rule(class_named_name, ctll::term<'g'>) -> ctll::push<ctll::anything, ctll::term<'r'>, ctll::term<'a'>, ctll::term<'p'>, ctll::term<'h'>, class_named_graph>;
	static constexpr auto rule(class_named_name, ctll::term<'a'>) -> ctll::push<ctll::anything, f>;
	static constexpr auto rule(class_named_name, ctll::term<'p'>) -> ctll::push<ctll::anything, g>;

	static constexpr auto rule(content2, ctll::term<'\x29'>) -> ctll::epsilon;
	static constexpr auto rule(content2, ctll::epsilon) -> ctll::epsilon;
	static constexpr auto rule(content2, ctll::term<'|'>) -> ctll::push<ctll::anything, a>;

	static constexpr auto rule(content_in_capture, ctll::term<'\\'>) -> ctll::push<ctll::anything, backslash, repeat, string2, content2>;
	static constexpr auto rule(content_in_capture, ctll::term<'\x28'>) -> ctll::push<ctll::anything, c, repeat, string2, content2>;
	static constexpr auto rule(content_in_capture, ctll::term<'['>) -> ctll::push<ctll::anything, d, repeat, string2, content2>;
	static constexpr auto rule(content_in_capture, ctll::term<'^'>) -> ctll::push<ctll::anything, push_assert_begin, repeat, string2, content2>;
	static constexpr auto rule(content_in_capture, ctll::term<'$'>) -> ctll::push<ctll::anything, push_assert_end, repeat, string2, content2>;
	static constexpr auto rule(content_in_capture, ctll::set<',','-',':','>','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U',']','a','0','V','W','X','Y','Z','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9'>) -> ctll::push<ctll::anything, push_character, repeat, string2, content2>;
	static constexpr auto rule(content_in_capture, _others) -> ctll::push<ctll::anything, push_character, repeat, string2, content2>;
	static constexpr auto rule(content_in_capture, ctll::term<'.'>) -> ctll::push<ctll::anything, push_character_anything, repeat, string2, content2>;
	static constexpr auto rule(content_in_capture, ctll::term<'\x29'>) -> ctll::push<push_empty>;
	static constexpr auto rule(content_in_capture, ctll::set<'*','+','<','?','_','\x7B','|','\x7D'>) -> ctll::reject;

	static constexpr auto rule(d, ctll::term<'['>) -> ctll::push<ctll::anything, ctll::term<':'>, h, range, set_start, set2, set_make, ctll::term<']'>>;
	static constexpr auto rule(d, ctll::term<'\\'>) -> ctll::push<ctll::anything, e, set_start, set2, set_make, ctll::term<']'>>;
	static constexpr auto rule(d, ctll::set<'$','\x28','\x29','*','+',',','.',':','?','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','0','X','Y','Z','_','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\x7B','\x7D','1','2','3','4','5','6','7','8','9'>) -> ctll::push<ctll::anything, push_character, range, set_start, set2, set_make, ctll::term<']'>>;
	static constexpr auto rule(d, _others) -> ctll::push<ctll::anything, push_character, range, set_start, set2, set_make, ctll::term<']'>>;
	static constexpr auto rule(d, ctll::term<'^'>) -> ctll::push<ctll::anything, set, set_make_negative, ctll::term<']'>>;
	static constexpr auto rule(d, ctll::set<'-','<','>',']','|'>) -> ctll::reject;

	static constexpr auto rule(e, ctll::term<'d'>) -> ctll::push<ctll::anything, class_digit>;
	static constexpr auto rule(e, ctll::term<'D'>) -> ctll::push<ctll::anything, class_nondigit>;
	static constexpr auto rule(e, ctll::term<'N'>) -> ctll::push<ctll::anything, class_nonnewline>;
	static constexpr auto rule(e, ctll::term<'S'>) -> ctll::push<ctll::anything, class_nonspace>;
	static constexpr auto rule(e, ctll::term<'W'>) -> ctll::push<ctll::anything, class_nonword>;
	static constexpr auto rule(e, ctll::term<'s'>) -> ctll::push<ctll::anything, class_space>;
	static constexpr auto rule(e, ctll::term<'w'>) -> ctll::push<ctll::anything, class_word>;
	static constexpr auto rule(e, ctll::term<'x'>) -> ctll::push<ctll::anything, j, range>;
	static constexpr auto rule(e, ctll::set<'$','\x28','\x29','*','+','-','.','?','A','B','C','E','F','G','H','I','J','K','L','M','O','P','Q','U','V','X','Y','Z','[','\\',']','^','b','c','h','i','j','k','l','m','o','p','q','u','v','y','z','\x7B','|','\x7D','1','2','3','4','5','6','7','8','9'>) -> ctll::push<ctll::anything, push_character>;
	static constexpr auto rule(e, ctll::term<'a'>) -> ctll::push<ctll::anything, push_character_alarm, range>;
	static constexpr auto rule(e, ctll::term<'e'>) -> ctll::push<ctll::anything, push_character_escape, range>;
	static constexpr auto rule(e, ctll::term<'f'>) -> ctll::push<ctll::anything, push_character_formfeed, range>;
	static constexpr auto rule(e, ctll::term<'n'>) -> ctll::push<ctll::anything, push_character_newline, range>;
	static constexpr auto rule(e, ctll::term<'0'>) -> ctll::push<ctll::anything, push_character_null, range>;
	static constexpr auto rule(e, ctll::term<'r'>) -> ctll::push<ctll::anything, push_character_return_carriage, range>;
	static constexpr auto rule(e, ctll::term<'t'>) -> ctll::push<ctll::anything, push_character_tab, range>;

	static constexpr auto rule(f, ctll::term<'s'>) -> ctll::push<ctll::anything, ctll::term<'c'>, ctll::term<'i'>, ctll::term<'i'>, class_named_ascii>;
	static constexpr auto rule(f, ctll::term<'l'>) -> ctll::push<ctll::anything, n>;

	static constexpr auto rule(g, ctll::term<'r'>) -> ctll::push<ctll::anything, ctll::term<'i'>, ctll::term<'n'>, ctll::term<'t'>, class_named_print>;
	static constexpr auto rule(g, ctll::term<'u'>) -> ctll::push<ctll::anything, ctll::term<'n'>, ctll::term<'c'>, ctll::term<'t'>, class_named_punct>;

	static constexpr auto rule(h, ctll::term<'^'>) -> ctll::push<ctll::anything, class_named_name, negate_class_named, ctll::term<':'>, ctll::term<']'>>;
	static constexpr auto rule(h, ctll::term<'x'>) -> ctll::push<ctll::anything, ctll::term<'d'>, ctll::term<'i'>, ctll::term<'g'>, ctll::term<'i'>, ctll::term<'t'>, class_named_xdigit, ctll::term<':'>, ctll::term<']'>>;
	static constexpr auto rule(h, ctll::term<'d'>) -> ctll::push<ctll::anything, ctll::term<'i'>, ctll::term<'g'>, ctll::term<'i'>, ctll::term<'t'>, class_named_digit, ctll::term<':'>, ctll::term<']'>>;
	static constexpr auto rule(h, ctll::term<'b'>) -> ctll::push<ctll::anything, ctll::term<'l'>, ctll::term<'a'>, ctll::term<'n'>, ctll::term<'k'>, class_named_blank, ctll::term<':'>, ctll::term<']'>>;
	static constexpr auto rule(h, ctll::term<'c'>) -> ctll::push<ctll::anything, ctll::term<'n'>, ctll::term<'t'>, ctll::term<'r'>, ctll::term<'l'>, class_named_cntrl, ctll::term<':'>, ctll::term<']'>>;
	static constexpr auto rule(h, ctll::term<'w'>) -> ctll::push<ctll::anything, ctll::term<'o'>, ctll::term<'r'>, ctll::term<'d'>, class_named_word, ctll::term<':'>, ctll::term<']'>>;
	static constexpr auto rule(h, ctll::term<'l'>) -> ctll::push<ctll::anything, ctll::term<'o'>, ctll::term<'w'>, ctll::term<'e'>, ctll::term<'r'>, class_named_lower, ctll::term<':'>, ctll::term<']'>>;
	static constexpr auto rule(h, ctll::term<'s'>) -> ctll::push<ctll::anything, ctll::term<'p'>, ctll::term<'a'>, ctll::term<'c'>, ctll::term<'e'>, class_named_space, ctll::term<':'>, ctll::term<']'>>;
	static constexpr auto rule(h, ctll::term<'u'>) -> ctll::push<ctll::anything, ctll::term<'p'>, ctll::term<'p'>, ctll::term<'e'>, ctll::term<'r'>, class_named_upper, ctll::term<':'>, ctll::term<']'>>;
	static constexpr auto rule(h, ctll::term<'g'>) -> ctll::push<ctll::anything, ctll::term<'r'>, ctll::term<'a'>, ctll::term<'p'>, ctll::term<'h'>, class_named_graph, ctll::term<':'>, ctll::term<']'>>;
	static constexpr auto rule(h, ctll::term<'a'>) -> ctll::push<ctll::anything, f, ctll::term<':'>, ctll::term<']'>>;
	static constexpr auto rule(h, ctll::term<'p'>) -> ctll::push<ctll::anything, g, ctll::term<':'>, ctll::term<']'>>;

	static constexpr auto rule(hexdec_repeat, ctll::term<'\x7D'>) -> ctll::epsilon;
	static constexpr auto rule(hexdec_repeat, ctll::set<'0','A','B','C','D','E','F','a','b','c','d','e','f','1','2','3','4','5','6','7','8','9'>) -> ctll::push<ctll::anything, push_hexdec, hexdec_repeat>;

	static constexpr auto rule(i, ctll::term<'\\'>) -> ctll::push<ctll::anything, backslash_range, make_range>;
	static constexpr auto rule(i, ctll::set<'$','\x28','\x29','*','+',',','.',':','?','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','0','X','Y','Z','_','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\x7B','\x7D','1','2','3','4','5','6','7','8','9'>) -> ctll::push<ctll::anything, push_character, make_range>;
	static constexpr auto rule(i, _others) -> ctll::push<ctll::anything, push_character, make_range>;
	static constexpr auto rule(i, ctll::set<'-','<','>','[',']','^','|'>) -> ctll::reject;

	static constexpr auto rule(j, ctll::term<'\x7B'>) -> ctll::push<create_hexdec, ctll::anything, ctll::set<'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','a','b','c','d','e','f'>, push_hexdec, hexdec_repeat, ctll::term<'\x7D'>, finish_hexdec>;
	static constexpr auto rule(j, ctll::set<'0','A','B','C','D','E','F','a','b','c','d','e','f','1','2','3','4','5','6','7','8','9'>) -> ctll::push<create_hexdec, ctll::anything, push_hexdec, ctll::set<'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','a','b','c','d','e','f'>, push_hexdec, finish_hexdec>;

	static constexpr auto rule(k, ctll::set<'0','1','2','3','4','5','6','7','8','9'>) -> ctll::push<ctll::anything, create_number, number2, ctll::term<'\x7D'>, make_back_reference>;
	static constexpr auto rule(k, ctll::term<'-'>) -> ctll::push<ctll::anything, number, ctll::term<'\x7D'>, make_relative_back_reference>;
	static constexpr auto rule(k, ctll::set<'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','_','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'>) -> ctll::push<ctll::anything, push_name, block_name2, ctll::term<'\x7D'>, make_back_reference>;

	static constexpr auto rule(l, ctll::set<'0','1','2','3','4','5','6','7','8','9'>) -> ctll::push<ctll::anything, create_number, number2, repeat_ab, ctll::term<'\x7D'>, mod>;
	static constexpr auto rule(l, ctll::term<'\x7D'>) -> ctll::push<repeat_at_least, ctll::anything, mod>;

	static constexpr auto rule(m, ctll::term<'<'>) -> ctll::push<ctll::anything, block_name, ctll::term<'>'>, content_in_capture, make_capture_with_name, ctll::term<'\x29'>>;
	static constexpr auto rule(m, ctll::term<':'>) -> ctll::push<ctll::anything, content_in_capture, ctll::term<'\x29'>>;

	static constexpr auto rule(mod, ctll::set<'$','\x28','\x29',',','-','.',':','<','>','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','|','0','1','2','3','4','5','6','7','8','9'>) -> ctll::epsilon;
	static constexpr auto rule(mod, ctll::epsilon) -> ctll::epsilon;
	static constexpr auto rule(mod, _others) -> ctll::epsilon;
	static constexpr auto rule(mod, ctll::term<'?'>) -> ctll::push<ctll::anything, make_lazy>;
	static constexpr auto rule(mod, ctll::term<'+'>) -> ctll::push<ctll::anything, make_possessive>;
	static constexpr auto rule(mod, ctll::set<'*','_','\x7B','\x7D'>) -> ctll::reject;

	static constexpr auto rule(mod_opt, ctll::set<'$','\x28','\x29',',','-','.',':','<','>','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','|','0','1','2','3','4','5','6','7','8','9'>) -> ctll::epsilon;
	static constexpr auto rule(mod_opt, ctll::epsilon) -> ctll::epsilon;
	static constexpr auto rule(mod_opt, _others) -> ctll::epsilon;
	static constexpr auto rule(mod_opt, ctll::term<'?'>) -> ctll::push<ctll::anything, make_lazy>;
	static constexpr auto rule(mod_opt, ctll::set<'*','+','_','\x7B','\x7D'>) -> ctll::reject;

	static constexpr auto rule(n, ctll::term<'p'>) -> ctll::push<ctll::anything, ctll::term<'h'>, ctll::term<'a'>, class_named_alpha>;
	static constexpr auto rule(n, ctll::term<'n'>) -> ctll::push<ctll::anything, ctll::term<'u'>, ctll::term<'m'>, class_named_alnum>;

	static constexpr auto rule(number2, ctll::set<',','\x7D'>) -> ctll::epsilon;
	static constexpr auto rule(number2, ctll::set<'0','1','2','3','4','5','6','7','8','9'>) -> ctll::push<ctll::anything, push_number, number2>;

	static constexpr auto rule(number, ctll::set<'0','1','2','3','4','5','6','7','8','9'>) -> ctll::push<ctll::anything, create_number, number2>;

	static constexpr auto rule(range, ctll::set<'$','\x28','\x29','*','+',',','.',':','?','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','_','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\x7B','\x7D','0','1','2','3','4','5','6','7','8','9'>) -> ctll::epsilon;
	static constexpr auto rule(range, ctll::epsilon) -> ctll::epsilon;
	static constexpr auto rule(range, _others) -> ctll::epsilon;
	static constexpr auto rule(range, ctll::term<'-'>) -> ctll::push<ctll::anything, i>;
	static constexpr auto rule(range, ctll::set<'<','>','^','|'>) -> ctll::reject;

	static constexpr auto rule(repeat, ctll::set<'$','\x28','\x29',',','-','.',':','<','>','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','|','0','1','2','3','4','5','6','7','8','9'>) -> ctll::epsilon;
	static constexpr auto rule(repeat, ctll::epsilon) -> ctll::epsilon;
	static constexpr auto rule(repeat, _others) -> ctll::epsilon;
	static constexpr auto rule(repeat, ctll::term<'?'>) -> ctll::push<ctll::anything, make_optional, mod_opt>;
	static constexpr auto rule(repeat, ctll::term<'\x7B'>) -> ctll::push<ctll::anything, number, b>;
	static constexpr auto rule(repeat, ctll::term<'+'>) -> ctll::push<ctll::anything, repeat_plus, mod>;
	static constexpr auto rule(repeat, ctll::term<'*'>) -> ctll::push<ctll::anything, repeat_star, mod>;
	static constexpr auto rule(repeat, ctll::set<'_','\x7D'>) -> ctll::reject;

	static constexpr auto rule(set2, ctll::term<']'>) -> ctll::epsilon;
	static constexpr auto rule(set2, ctll::term<'['>) -> ctll::push<ctll::anything, ctll::term<':'>, h, range, set_combine, set2>;
	static constexpr auto rule(set2, ctll::term<'\\'>) -> ctll::push<ctll::anything, e, set_combine, set2>;
	static constexpr auto rule(set2, ctll::set<'$','\x28','\x29','*','+',',','.',':','?','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','0','X','Y','Z','_','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\x7B','\x7D','1','2','3','4','5','6','7','8','9'>) -> ctll::push<ctll::anything, push_character, range, set_combine, set2>;
	static constexpr auto rule(set2, _others) -> ctll::push<ctll::anything, push_character, range, set_combine, set2>;
	static constexpr auto rule(set2, ctll::set<'-','<','>','^','|'>) -> ctll::reject;

	static constexpr auto rule(set, ctll::term<'['>) -> ctll::push<ctll::anything, ctll::term<':'>, h, range, set_start, set2>;
	static constexpr auto rule(set, ctll::term<'\\'>) -> ctll::push<ctll::anything, e, set_start, set2>;
	static constexpr auto rule(set, ctll::set<'$','\x28','\x29','*','+',',','.',':','?','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','0','X','Y','Z','_','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\x7B','\x7D','1','2','3','4','5','6','7','8','9'>) -> ctll::push<ctll::anything, push_character, range, set_start, set2>;
	static constexpr auto rule(set, _others) -> ctll::push<ctll::anything, push_character, range, set_start, set2>;
	static constexpr auto rule(set, ctll::set<'-','<','>',']','^','|'>) -> ctll::reject;

	static constexpr auto rule(string2, ctll::set<'\x29','|'>) -> ctll::epsilon;
	static constexpr auto rule(string2, ctll::epsilon) -> ctll::epsilon;
	static constexpr auto rule(string2, ctll::term<'\\'>) -> ctll::push<ctll::anything, backslash, repeat, string2, make_sequence>;
	static constexpr auto rule(string2, ctll::term<'\x28'>) -> ctll::push<ctll::anything, c, repeat, string2, make_sequence>;
	static constexpr auto rule(string2, ctll::term<'['>) -> ctll::push<ctll::anything, d, repeat, string2, make_sequence>;
	static constexpr auto rule(string2, ctll::term<'^'>) -> ctll::push<ctll::anything, push_assert_begin, repeat, string2, make_sequence>;
	static constexpr auto rule(string2, ctll::term<'$'>) -> ctll::push<ctll::anything, push_assert_end, repeat, string2, make_sequence>;
	static constexpr auto rule(string2, ctll::set<',','-',':','<','>','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U',']','a','0','V','W','X','Y','Z','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9'>) -> ctll::push<ctll::anything, push_character, repeat, string2, make_sequence>;
	static constexpr auto rule(string2, _others) -> ctll::push<ctll::anything, push_character, repeat, string2, make_sequence>;
	static constexpr auto rule(string2, ctll::term<'.'>) -> ctll::push<ctll::anything, push_character_anything, repeat, string2, make_sequence>;
	static constexpr auto rule(string2, ctll::set<'*','+','?','_','\x7B','\x7D'>) -> ctll::reject;

};

}

#endif //CTRE__PCRE__HPP
