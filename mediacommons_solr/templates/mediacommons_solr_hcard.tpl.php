<?php foreach ($peoplelist as $person) :?>
  <div class="h-card">
    <?php if ($person['name']) : ?>
      <span class="p-name name fn"><?php print $person['name'] ?></span>
    <?php endif; ?>
    <?php if ($person['organization']) : ?>
      <span class="p-org"><?php print $person['organization'] ?></span>
    <?php endif; ?>
  </div>
<?php endforeach; ?>
