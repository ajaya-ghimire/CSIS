import java.util.Random;

public class RandomSentences {
    public static void main(String[] args) {
        String[] articles = {"the", "a", "one", "some", "any"};
        String[] nouns = {"boy", "girl", "dog", "town", "car"};
        String[] verbs = {"drove", "jumped", "ran", "walked", "skipped"};
        String[] prepositions = {"to", "from", "over", "under", "on"};

        Random random = new Random();

        for (int i = 0; i < 20; i++) {
            String sentence = generateSentence(random, articles, nouns, verbs, prepositions);
            System.out.println(capitalize(sentence) + ".");
        }
    }

    private static String generateSentence(Random random, String[] articles, String[] nouns, String[] verbs, String[] prepositions) {
        StringBuilder sentence = new StringBuilder();
        sentence.append(articles[random.nextInt(articles.length)]).append(" ");
        sentence.append(nouns[random.nextInt(nouns.length)]).append(" ");
        sentence.append(verbs[random.nextInt(verbs.length)]).append(" ");
        sentence.append(prepositions[random.nextInt(prepositions.length)]).append(" ");
        sentence.append(articles[random.nextInt(articles.length)]).append(" ");
        sentence.append(nouns[random.nextInt(nouns.length)]);
        return sentence.toString();
    }

    private static String capitalize(String s) {
        return Character.toUpperCase(s.charAt(0)) + s.substring(1);
    }
}
