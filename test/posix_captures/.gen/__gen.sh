
for f in ../.dat/*.dat; do

    d=../`basename ${f%.dat}`
    mkdir -p "$d"

    i=0
    while read l; do

        [ -z "$l" ] && continue
        set $l
        [ "$1" == SAME ] && continue

        i=$((i + 1))
        x=`printf '%02d' $i`.re
        y="${x%.re}_stadfa.re"
        regexp=`printf "%s" "$1" | sed \
            -e 's/\[^/[^\\\\x00/g' \
            -e 's/\./[^\\\\x00]/g' \
            -e 's/()/("")/g'`

        printf '// re2c $INPUT -o $OUTPUT -i --flex-syntax\n'          > "$d/$x"
        printf '// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa\n' > "$d/$y"
        cat template | sed "s/<<<<REGEXP>>>>/$regexp/" > tmp
        cat tmp >> "$d/$x"
        cat tmp >> "$d/$y"
        rm tmp

    done < "$f"
done

