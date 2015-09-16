<?php

function mediacommons_slate_embed_url ( ) {
	$urls = array (
			'https://www.youtube.com/watch?v=xi5_iYbZjEc',
			'https://www.youtube.com/watch?v=jnLETP0IRm8',
			'https://www.youtube.com/watch?v=YsH2dNF9070',
			'https://www.youtube.com/watch?v=vDeo21MQVFo',
			'https://www.youtube.com/watch?v=2u9a9lihBl4',
			'https://www.youtube.com/watch?v=a9Wu1khCGSU',
			'https://www.youtube.com/watch?v=ecEgKFl3Wu0',
			'https://www.youtube.com/watch?v=s6L9kgt9Mrw',
			'https://www.youtube.com/watch?v=D5SizWlb2wo',
			'https://www.youtube.com/watch?v=iZ_W0XTMWE4',
	) ;

	return $urls[ array_rand ( $urls ) ] ;

}

function mediacommons_slate_embed_text ( ) {
  return '<iframe src="' . mediacommons_slate_embed_url ( ) . '"></iframe>' ;
}

function mediacommons_slate_body_text ( ) {
	$text = array (
    "Non eram nescius, Brute, cum, quae summis ingeniis exquisitaque doctrina philosophi Graeco sermone tractavissent, ea Latinis litteris mandaremus, fore ut hic noster labor in varias reprehensiones incurreret. nam quibusdam, et iis quidem non admodum indoctis, totum hoc displicet philosophari. quidam autem non tam id reprehendunt, si remissius agatur, sed tantum studium tamque multam operam ponendam in eo non arbitrantur. erunt etiam, et ii quidem eruditi Graecis litteris, contemnentes Latinas, qui se dicant in Graecis legendis operam malle consumere. postremo aliquos futuros suspicor, qui me ad alias litteras vocent, genus hoc scribendi, etsi sit elegans, personae tamen et dignitatis esse negent." ,
		"Contra quos omnis dicendum breviter existimo. Quamquam philosophiae quidem vituperatoribus satis responsum est eo libro, quo a nobis philosophia defensa et collaudata est, cum esset accusata et vituperata ab Hortensio. qui liber cum et tibi probatus videretur et iis, quos ego posse iudicare arbitrarer, plura suscepi veritus ne movere hominum studia viderer, retinere non posse." ,
		"Iis igitur est difficilius satis facere, qui se Latina scripta dicunt contemnere. in quibus hoc primum est in quo admirer, cur in gravissimis rebus non delectet eos sermo patrius, cum idem fabellas Latinas ad verbum e Graecis expressas non inviti legant. quis enim tam inimicus paene nomini Romano est, qui Ennii Medeam aut Antiopam Pacuvii spernat aut reiciat, quod se isdem Euripidis fabulis delectari dicat, Latinas litteras oderit?" ,
		"Synephebos ego, inquit, potius Caecilii aut Andriam Terentii quam utramque Menandri legam? [5] A quibus tantum dissentio, ut, cum Sophocles vel optime scripserit Electram, tamen male conversam Atilii mihi legendam putem, de quo Lucilius: 'ferreum scriptorem', verum, opinor, scriptorem tamen, ut legendus sit. rudem enim esse omnino in nostris poetis aut inertissimae segnitiae est aut fastidii delicatissimi. mihi quidem nulli satis eruditi videntur, quibus nostra ignota sunt." ,
		"Quamquam, si plane sic verterem Platonem aut Aristotelem, ut verterunt nostri poetae fabulas, male, credo, mererer de meis civibus, si ad eorum cognitionem divina illa ingenia transferrem. sed id neque feci adhuc nec mihi tamen, ne faciam, interdictum puto. locos quidem quosdam, si videbitur, transferam, et maxime ab iis, quos modo nominavi, cum inciderit, ut id apte fieri possit, ut ab Homero Ennius, Afranius a Menandro solet." ,
		"Sed iure Mucius. ego autem mirari [satis] non queo unde hoc sit tam insolens domesticarum rerum fastidium. non est omnino hic docendi locus; sed ita sentio et saepe disserui, Latinam linguam non modo non inopem, ut vulgo putarent, sed locupletiorem etiam esse quam Graecam. quando enim nobis, vel dicam aut oratoribus bonis aut poetis, postea quidem quam fuit quem imitarentur, ullus orationis vel copiosae vel elegantis ornatus defuit? Ego vero, quoniam forensibus operis, laboribus, periculis non deseruisse mihi videor praesidium, in quo a populo Romano locatus sum, debeo profecto, quantumcumque possum, in eo quoque elaborare, ut sint opera, studio, labore meo doctiores cives mei, nec cum istis tantopere pugnare, qui Graeca legere malint, modo legant illa ipsa, ne simulent, et iis servire, qui vel utrisque litteris uti velint vel, si suas habent, illas non magnopere desiderent." ,
		"Ut autem a facillimis ordiamur, prima veniat in medium Epicuri ratio, quae plerisque notissima est. quam a nobis sic intelleges eitam, ut ab ipsis, qui eam disciplinam probant, non soleat accuratius explicari; verum enim invenire volumus, non tamquam adversarium aliquem convincere. accurate autem quondam a L. Torquato, homine omni doctrina erudito, defensa est Epicuri sententia de voluptate, a meque ei responsum, cum C. Triarius, in primis gravis et doctus adolescens, ei disputationi interesset. [14] Nam cum ad me in Cumanum salutandi causa uterque venisset, pauca primo inter nos de litteris, quarum summum erat in utroque studium, deinde Torquatus: Quoniam nacti te, inquit, sumus aliquando otiosum, certe audiam, quid sit, quod Epicurum nostrum non tu quidem oderis, ut fere faciunt, qui ab eo dissentiunt, sed certe non probes, eum quem ego arbitror unum vidisse verum maximisque erroribus animos hominum liberavisse et omnia tradidisse, quae pertinerent ad bene beateque vivendum. sed existimo te, sicut nostrum Triarium, minus ab eo delectari, quod ista Platonis, Aristoteli, Theophrasti orationis ornamenta neglexerit. nam illud quidem adduci vix possum, ut ea, quae senserit ille, tibi non vera videantur." ,
		"Quid igitur est? inquit; audire enim cupio, quid non probes. Principio, inquam, in physicis, quibus maxime gloriatur, primum totus est alienus. Democritea dicit perpauca mutans, sed ita, ut ea, quae corrigere vult, mihi quidem depravare videatur. ille atomos quas appellat, id est corpora individua propter soliditatem, censet in infinito inani, in quo nihil nec summum nec infimum nec medium nec ultimum nec extremum sit, ita ferri, ut concursionibus inter se cohaerescant, ex quo efficiantur ea, quae sint quaeque cernantur, omnia, eumque motum atomorum nullo a principio, sed ex aeterno tempore intellegi convenire." ,
		"Deinde ibidem homo acutus, cum illud ocurreret, si omnia deorsus e regione ferrentur et, ut dixi, ad lineam, numquam fore ut atomus altera alteram posset attingere itaque ** attulit rem commenticiam: declinare dixit atomum perpaulum, quo nihil posset fieri minus; ita effici complexiones et copulationes et adhaesiones atomorum inter se, ex quo efficeretur mundus omnesque partes mundi, quaeque in eo essent." ,
		"Sed ut omittam pericula, labores, dolorem etiam, quem optimus quisque pro patria et pro suis suscipit, ut non modo nullam captet, sed etiam praetereat omnes voluptates, dolores denique quosvis suscipere malit quam deserere ullam officii partem, ad ea, quae hoc non minus declarant, sed videntur leviora, veniamus." ,
	) ;

	return $text [ rand ( 1 , count ( $text ) - 1 ) ] ;

}

function mediacommons_slate_body_title ( ) {

  $text = mediacommons_slate_body_text ( ) ;

  $text_strlen = strlen ( $text ) ;

  $text = substr ( $text, 0 ,  rand ( 15 , 45 ) ) ;

  if ( ! $text ) $text = "Sed ut omittam pericula -- Sed ut omittam pericula Sed ut" ; // no need for fancy things!

	return $text ;

}

/** Return a plain node template */
function mediacommons_slate_setup_node ( $type ) {
	$node = new StdClass();
	$node->type = $type;
	$node->language = LANGUAGE_NONE;
	$node->promote = 0;
	$node->sticky = 0;
	/** Fills in a few default values */
	node_object_prepare($node);
	return $node;
}
