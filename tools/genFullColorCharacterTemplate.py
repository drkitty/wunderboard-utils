#!/bin/bash

cat <<EOF
#ifndef CHARACTERS_FULL_COLOR_H
#define CHARACTERS_FULL_COLOR_H

struct character {
	uint8_t* pixels;
	uint8_t width;
};

#define SETUP_CHARS() \\
struct {\\
	uint8_t width[0x80];\\
	const uint8_t* pixels[0x80];\\
} charTable;
EOF

echo
echo

echo '#define INIT_CAPITALS() \'
for i in {65..90}; do {
	printf -v hex '%x' "$i"
	printf -v letter "\\x$hex"
	echo -n 'INIT_LETTER_'${letter}'();'
	if [[ $i != 90 ]]; then {
		echo '\'
	}; fi
}; done

echo
echo

echo '#define LOAD_CAPITALS() \'
for i in {65..90}; do {
	printf -v hex '%x' "$i"
	printf -v letter "\\x$hex"
	echo -n 'LOAD_LETTER_'${letter}'();'
	if [[ $i != 90 ]]; then {
		echo '\'
	}; fi
}; done

echo
echo

echo '#define INIT_LOWERCASE() \'
for i in {97..122}; do {
	printf -v hex '%x' "$i"
	printf -v letter "\\x$hex"
	echo -n 'INIT_LETTER_'${letter}'();'
	if [[ $i != 122 ]]; then {
		echo '\'
	}; fi
}; done

echo
echo

echo '#define LOAD_LOWERCASE() \'
for i in {97..122}; do {
	printf -v hex '%x' "$i"
	printf -v letter "\\x$hex"
	echo -n 'LOAD_LETTER_'${letter}'();'
	if [[ $i != 122 ]]; then {
		echo '\'
	}; fi
}; done

echo
echo
echo

for i in {65..90} {97..122}; do {
	printf -v hex '%x' "$i"
	printf -v letter "\\x$hex"
	varname=letter_${letter}
	VARNAME=LETTER_${letter}
	cat <<EOF
#define INIT_${VARNAME}() \\
static const uint8_t ${varname}_pixels[] PROGMEM = {\\
	0,0,0,0,0,0,\\
	0,0,0,0,0,0,\\
	0,0,0,0,0,0,\\
	0,0,0,0,0,0,\\
	0,0,0,0,0,0,\\
	0,0,0,0,0,0,\\
	0,0,0,0,0,0,\\
	0,0,0,0,0,0\\
};

#define LOAD_${VARNAME}() \\
charTable.pixels[0x${hex}] = ${varname}_pixels;\\
charTable.width[0x${hex}] = 6;

EOF
}; done

echo

for i in {65..90} {97..122}; do {
	printf -v hex '%x' "$i"
	printf -v letter "\\x$hex"
	varname=letter_${letter}
	VARNAME=LETTER_${letter}
	cat <<EOF
EOF
}; done

echo '#endif // CHARACTERS_FULL_COLOR_H'